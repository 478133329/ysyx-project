  #include "Vmy_cpu.h"
  #include "Vmy_cpu__Dpi.h"
  #include "svdpi.h"
  #include "verilated.h"
  #include "verilated_vcd_c.h"
  #include "stdio.h"

  #define MEM_SIZE 1024
  
  unsigned int memory[MEM_SIZE];

  Vmy_cpu *top;
  VerilatedContext* contextp;
  VerilatedVcdC* tfp;

  svBit finish = 0;
  void call_break(svBit call) { finish = call; }

  void memory_reset() {
  	memory[0] = 0x00200513;
	memory[1] = 0x00300493;
	memory[2] = 0x00A48433;
	memory[3] = 0x00100073;
  }

  unsigned int read_mem(unsigned int vaddr) {
	unsigned int paddr = (vaddr - 0x80000000) >> 2;
  	return memory[paddr];
  }

  void single_cycle() {
  	top->clk = 0;
	top->eval();
	tfp->dump(contextp->time());
	contextp->timeInc(1);
	top->clk = 1;
	if(top->instr_raddr >= 0x80000000)  //MCU
		top->instr = read_mem(top->instr_raddr);
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
	contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	tfp= new VerilatedVcdC;
	contextp->traceEverOn(true);
	top = new Vmy_cpu{contextp};
	top->trace(tfp, 0);
	tfp->open("wave.vcd");
	memory_reset();
	pc_reset(10);
	int counter = 0;
	// while (!contextp->gotFinish()) { 
	while (!finish) {
		single_cycle();
		counter++;
	}
	printf("\n\nget\n\n");
      delete top;
	tfp->close();
      delete contextp;
      return 0;
  }
