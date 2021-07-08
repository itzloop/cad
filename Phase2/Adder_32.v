`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:45:21 06/11/2021 
// Design Name: 
// Module Name:    Adder_32 
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
module Adder_32(
	input [31:0]a,
	input [31:0]b,
	output [31:0] s
    );
	 
wire [32:0]wires;
genvar i;

assign wires[0] = 0;
generate
	for (i = 0; i < 32; i = i + 1) begin
		FA adder(.a(a[i]),
			.b(b[i]), 
			.cin(wires[i]), 
			.cout(wires[i+1]), 
			.s(s[i]));	
	end

endgenerate

endmodule


module FA(
	input a, 
	input b,
	input cin, 
	output cout, 
	output s
	 );

assign {cout,s}=a+b+cin;

endmodule