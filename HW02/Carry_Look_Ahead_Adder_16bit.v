`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:26:09 05/01/2021 
// Design Name: 
// Module Name:    Carry_Look_Ahead_Adder_16bit 
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
module Carry_Look_Ahead_Adder_16bit(
	input[15:0] A,
	input[15:0] B,
	input CIN,
	output[15:0] S,
	output c_cout
 );
	wire c1,c2,c3;
	CLA_4bit CLA_1 (.a(A[3:0]), .b(B[3:0]), .cin(CIN), .s(S[3:0]), .cout(c1));
	CLA_4bit CLA_2 (.a(A[7:4]), .b(B[7:4]), .cin(c1), .s(S[7:4]), .cout(c2));
	CLA_4bit CLA_3(.a(A[11:8]), .b(B[11:8]), .cin(c2), .s(S[11:8]), .cout(c3));
	CLA_4bit CLA_4(.a(A[15:12]), .b(B[15:12]), .cin(c3), .s(S[15:12]), .cout(c_cout));
	

endmodule
