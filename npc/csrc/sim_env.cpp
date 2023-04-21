#include <sim_env.h>

static void parse_args(int argc, char* argv[]) {
	int ch = 0;
	while ((ch = getopt(argc, argv, "f:l:")) != -1) {
		if (ch == 'f') img_file = optarg;
		if (ch == 'l') log_file = optarg;
	}
}

extern "C" void npc_trap(long long pc) {
	set_npc_state(NPC_END, pc, 0);
}

void set_npc_state(int state, vaddr_t halt_pc, uint32_t halt_ret) {
	npc.state = state;
	npc.halt_pc = halt_pc;
	npc.halt_ret = halt_ret;
}

void sim_env_init(int argc, char* argv[]) {
	parse_args(argc, argv);

	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	top = new Vmy_cpu{ contextp };

	contextp->traceEverOn(true);
	top->trace(tfp, 0);
	tfp->open("wave.vcd");

	memory_init(img_file);
}