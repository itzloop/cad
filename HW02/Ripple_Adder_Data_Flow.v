`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:24:21 04/29/2021 
// Design Name: 
// Module Name:    Ripple_Adder_Data_Flow 
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
module Ripple_Adder_Data_Flow(
	input [3:0]a,
	input [3:0]b,
	input cin,
	output [3:0]s,
	output cout
    );
	 
	// Inputs
	FA_Data_Flow fa0 (
		.a(a[0]), 
		.b(b[0]), 
		.cin(cin), 
		.cout(cout_internal0), 
		.s(s[0])
	);
	
	FA_Data_Flow fa1 (
		.a(a[1]), 
		.b(b[1]), 
		.cin(cout_internal0), 
		.cout(cout_internal1), 
		.s(s[1])
	);
	FA_Data_Flow fa2 (
		.a(a[2]), 
		.b(b[2]), 
		.cin(cout_internal1), 
		.cout(cout_internal2), 
		.s(s[2])
	);
	
	FA_Data_Flow fa3 (
		.a(a[3]), 
		.b(b[3]), 
		.cin(cout_internal2), 
		.cout(cout), 
		.s(s[3])
	);
endmodule
