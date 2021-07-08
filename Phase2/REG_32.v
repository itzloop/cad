`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:40:48 06/11/2021 
// Design Name: 
// Module Name:    REG_32 
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
module REG_32(
	input clk,
	input [31:0]inp,
	input reset,
	input write,
	output reg [31:0]q
    );
	initial begin
		q = 0;
	end
	always @ ( posedge clk ) begin 
		if (reset)
			q <= 0;
		else if(write)
			q <= inp;
	end

endmodule
