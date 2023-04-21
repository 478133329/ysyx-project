#include <sim_exec.h>

int sim_exec(int n) {
	switch (npc.state) {
	case NPC_END: case NPC_ABORT: case NPC_EXIT: 
		printf("npc has finished.\n");  return 0;
	default: npc.state = NPC_RUN; break;
	}

	while (n--) {
		sim_exec_once();
		if (npc.state != NPC_RUN) break;
	}

	switch (npc.state) {
	case NPC_END: case NPC_ABORT: case NPC_EXIT:
		tfp->close();
		delete contextp;
		delete top;
		printf("npc has finished.\n"); break;
	default: npc.state = NPC_STOP; break;
	}
	
	return 0;
}

void sim_exec_once() {
	// ifetch
	top->clk = 0;
	top->instr = mem_read(top->instr_raddr, 4);
	top->eval();
	tfp->dump(contextp->time());
	contextp->timeInc(1);
	// decode
	// excute
	// update_pc
	top->clk = 1;
	top->eval();
	tfp->dump(contextp->time());
	contextp->timeInc(1);
}

void sim_exec_init(int n) {
	top->rst = 1;
	top->eval();
	while (n--) {
		top->clk = 0;
		top->eval();
		top->clk = 1;
		top->eval();
	}
	top->rst = 0;
	top->eval();
}