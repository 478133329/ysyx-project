module reg_heap(input clk, 
		input rst, 
		input wen,
		input[4:0] waddr, 
		input[4:0] raddr1, 
		input[4:0] raddr2, 
		output[31:0] wdata, 
		output[31:0] rdata1, 
		output[31:0] rdata2
		);
	reg[31:0] registers[31:0];
	integer i;
	assign rdata1 = registers[raddr1];
	assign rdata2 = registers[raddr2];
	Reg #(32, 32'b0) reg_heap_reg(.clk(clk), .rst(rst), .din(wdata), .dout(registers[waddr]), .wen(wen));
	always registers[0] = 32'b0;
endmodule
		
			
