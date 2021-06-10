`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:02:29 06/11/2021 
// Design Name: 
// Module Name:    Instruction_Mem 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Instruction_Mem(
	input [31:0]address,
	output [31:0]read_data
    );
	 parameter mem_size = 256;
	 parameter mem_cell_size = 32;
	 
	 reg [mem_cell_size-1:0]mem[mem_size - 1:0];
	 
	 assign read_data = mem[address / 4];
	 integer i;
	 initial begin
		
		for (i = 0; i < mem_size; i = i + 1) begin
			mem[i] = 32'd0;
		end

		$readmemh("instructions", mem);
	 end

endmodule
