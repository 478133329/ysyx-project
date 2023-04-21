#include <readline/readline.h>
#include <readline/history.h>
#include <sim_sdb.h>

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
    static char* line_read = NULL;

    if (line_read) {
        free(line_read);
        line_read = NULL;
    }

    line_read = readline("(nemu) ");

    if (line_read && *line_read) {
        add_history(line_read);
    }

    return line_read;
}

static int cmd_c(char* args) {
    sim_exec(-1);
    return 0;
}

static int cmd_si(char* args) {
    int n = 1;
    if (args != NULL) {
        sscanf(args, "%d", &n);
    }
    sim_exec(n);
    return 0;
}

static int cmd_info(char* args) {
    if (args == NULL) {
        printf("info指令 缺少参数\n");
    }
    else if (strcmp(args, "r") == 0) {
        // TODO
    }
    else {
        printf("未知的参数 [%s] \n", args);
    }

    return 0;
}


static int cmd_x(char* args) {
    char* arg = strtok(NULL, " ");
    int n = 0;
    sscanf(arg, "%d", &n);
    arg = args + strlen(arg) + 1;
    vaddr_t addr = 0x80000000;
    sscanf(arg, "0x%lx", &addr);

    vaddr_t begin_addr = (addr > CONFIG_MBASE) ? addr : CONFIG_MBASE;
    vaddr_t end_addr = ((addr + n) < CONFIG_MBASE + CONFIG_MSIZE) ? (addr + n) : CONFIG_MBASE + CONFIG_MSIZE;
    for (vaddr_t p = begin_addr; p < end_addr; p += 8) {
        printf("%016lx: ", p);
        for (int slice = 0; slice < 8; slice++) {
            if (p + slice < end_addr) printf("%02lx ", vaddr_read(p + slice, 1));
        }
        printf("\n");
    }
    return 0;
}

static int cmd_q(char* args) {
    npc.state = NPC_EXIT;
    return -1;
}

static int cmd_help(char* args);

static struct {
    const char* name;
    const char* description;
    int (*handler) (char*);
} cmd_table[] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "", cmd_si },
  { "info", "", cmd_info },
  { "x", "", cmd_x },

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char* args) {
    /* extract the first argument */
    char* arg = strtok(NULL, " ");
    int i;

    if (arg == NULL) {
        /* no argument given */
        for (i = 0; i < NR_CMD; i++) {
            printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        }
    }
    else {
        for (i = 0; i < NR_CMD; i++) {
            if (strcmp(arg, cmd_table[i].name) == 0) {
                printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
                return 0;
            }
        }
        printf("Unknown command '%s'\n", arg);
    }
    return 0;
}

void sdb_mainloop() {
    if (is_batch_mode) {
        cmd_c(NULL);
        return;
    }
    for (char* str; (str = rl_gets()) != NULL; ) {
        char* str_end = str + strlen(str);

        /* extract the first token as the command */
        char* cmd = strtok(str, " ");
        if (cmd == NULL) { continue; }

        /* treat the remaining string as the arguments,
         * which may need further parsing
         */
        char* args = cmd + strlen(cmd) + 1;
        if (args >= str_end) {
            args = NULL;
        }
        int i;
        for (i = 0; i < NR_CMD; i++) {
            if (strcmp(cmd, cmd_table[i].name) == 0) {
                if (cmd_table[i].handler(args) < 0) { return; }
                break;
            }
        }

        if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
    }
}