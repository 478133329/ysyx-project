#include "Vmy_cpu.h"
#include "Vmy_cpu__Dpi.h"
#include "svdpi.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "stdio.h"
#include <getopt.h>
#include <memory.h>

Vmy_cpu *top;
VerilatedContext* contextp;
VerilatedVcdC* tfp;

char* img_file = NULL;

svBit finish = 0;
void call_break(svBit call) { finish = call; }

void single_cycle() {
	top->clk = 0;
	top->eval();
	tfp->dump(contextp->time());
	contextp->timeInc(1);
	top->clk = 1;
	top->eval();
	if (top->instr_raddr >= 0x80000000) {
		top->instr = mem_read(top->instr_raddr, 4);
	}  //MCU
	top->eval();
	tfp->dump(contextp->time());
	contextp->timeInc(1);
}

void pc_reset(int n) {
	top->rst = 1;
	while(n--) single_cycle();
	top->rst = 0;
}

int main(int argc, char** argv) {
	int o = 0;
	if((o = getopt_long(argc, argv, "", NULL, NULL)) != -1) {
		img_file = optarg;
	}
	load_img(img_file);
	contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	tfp= new VerilatedVcdC;
	contextp->traceEverOn(true);
	top = new Vmy_cpu{contextp};
	top->trace(tfp, 0);
	tfp->open("wave.vcd");
	pc_reset(4);
	// while (!contextp->gotFinish()) { 
	while (!finish) {
		single_cycle();
	}
	printf("finish\n");
	delete top;
	tfp->close();
	delete contextp;
	return 0;
}
