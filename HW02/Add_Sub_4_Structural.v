`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:22:39 05/01/2021 
// Design Name: 
// Module Name:    Add_Sub_4_Structural 
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
module Add_Sub_4_Structural(
	input [3:0]a, b, 
	input cin, sub,
	output [3:0]s,
	output cout
    );
	 
	 wire cin_xor_sub;
	 wire [3:0]bxor;
	 xor( cin_xor_sub, cin, sub);
	 xor( bxor[0], b[0], sub);
	 xor( bxor[1], b[1], sub);
	 xor( bxor[2], b[2], sub);
	 xor( bxor[3], b[3], sub);
	 
	 
FA_Structural fa0 (
		.a(a[0]), 
		.b(bxor[0]), 
		.cin(cin_xor_sub), 
		.cout(cout_internal0), 
		.s(s[0])
	);
	
FA_Structural fa1 (
		.a(a[1]), 
		.b(bxor[1]), 
		.cin(cout_internal0), 
		.cout(cout_internal1), 
		.s(s[1])
	);
	
	
FA_Structural fa2 (
		.a(a[2]), 
		.b(bxor[2]), 
		.cin(cout_internal1), 
		.cout(cout_internal2), 
		.s(s[2])
	);
	
	
FA_Structural fa3 (
		.a(a[3]), 
		.b(bxor[3]), 
		.cin(cout_internal2), 
		.cout(cout), 
		.s(s[3])
	);

endmodule
