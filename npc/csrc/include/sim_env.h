#ifndef __SIM_ENV__
#define __SIM_ENV__

#include <memory.h>
#include <getopt.h>

enum { NPC_STOP, NPC_RUN, NPC_ABORT, NPC_END, NPC_EXIT };

typedef struct {
	int state;
	vaddr_t halt_pc;
	uint32_t halt_ret;
} NPC;

typedef struct {
	word_t gpr[32];
	vaddr_t pc;
} CPU;

extern Vmy_cpu* top;
extern VerilatedContext* contextp;
extern VerilatedVcdC* tfp;

extern NPC npc;
extern CPU cpu;

extern char* img_file;
extern char* log_file;

void sim_env_init(int argc, char* argv[]);

void set_npc_state(int state, vaddr_t halt_pc, uint32_t halt_ret);

#endif