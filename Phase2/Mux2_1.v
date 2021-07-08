`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:46:30 06/07/2021 
// Design Name: 
// Module Name:    Mux2_1 
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
module Mux2_1(
	input [31:0]a,
	input [31:0]b,
	output [31:0]out,
	input s
    );

 assign out = s ? b : a;

endmodule
