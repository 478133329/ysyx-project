module reg_heap(input clk, 
		input rst, 
		input wen,
		input[4:0] waddr, 
		input[4:0] raddr1, 
		input[4:0] raddr2, 
		input[63:0] wdata, 
		output[63:0] rdata1, 
		output[63:0] rdata2
		);
	reg[63:0] registers[31:0];
	integer i;
	assign rdata1 = registers[raddr1];
	assign rdata2 = registers[raddr2];
	Reg #(64, 64'b0) reg_heap_reg(.clk(clk), .rst(rst), .din(wdata), .dout(registers[waddr]), .wen(wen));
	always registers[0] = 64'b0;
endmodule
		
			
