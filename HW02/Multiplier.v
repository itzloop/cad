`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:53:58 05/06/2021 
// Design Name: 
// Module Name:    Multiplier 
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
module Multiplier(
	input [3:0]a,
	input [3:0]b,
	output [7:0]mul
    );
	wire [3:0]win0;
	wire [3:0]win1;

	and(win0[0], a[0], b[1]);
	and(win0[1], a[0], b[2]);
	and(win0[2], a[0], b[3]);
	assign win0[3] = 1'b0; 
	
	and(win1[0], a[1], b[0]);
	and(win1[1], a[1], b[1]);
	and(win1[2], a[1], b[2]);
	and(win1[3], a[1], b[3]);
	
	// first bit of result
	and(mul[0], a[0], b[0]);

	wire [4:0] out1;
	Adder_Universal adder0(
		.a(win0),
		.b(win1),
		.cin(0),
		.cout(out1[4]),
		.s(out1[3:0])
	);
	
	assign mul[1] = out1[0];
	
	wire [3:0]win2;
	wire [4:0] out2;
	and(win2[0], a[2], b[0]);
	and(win2[1], a[2], b[1]);
	and(win2[2], a[2], b[2]);
	and(win2[3], a[2], b[3]);
	
	Adder_Universal adder1(
		.a(win2),
		.b(out1[4:1]),
		.cin(0),
		.cout(out2[4]),
		.s(out2[3:0])
	);

	assign mul[2] = out2[0];
	
	wire [3:0]win3;
	and(win3[0], a[3], b[0]);
	and(win3[1], a[3], b[1]);
	and(win3[2], a[3], b[2]);
	and(win3[3], a[3], b[3]);
	
	Adder_Universal adder2(
		.a(win3),
		.b(out2[4:1]),
		.cin(0),
		.cout(mul[7]),
		.s(mul[6:3])
	);
endmodule

module Adder_Universal(
	input [3:0]a,
	input [3:0]b,
	input cin,
	output [3:0]s,
	output cout
);
	FA_Universal_Structural fa0 (
		.a(a[0]), 
		.b(b[0]), 
		.cin(cin), 
		.cout(cout_internal0), 
		.s(s[0])
	);
	
	FA_Universal_Structural fa1 (
		.a(a[1]), 
		.b(b[1]), 
		.cin(cout_internal0), 
		.cout(cout_internal1), 
		.s(s[1])
	);
	FA_Universal_Structural fa2 (
		.a(a[2]), 
		.b(b[2]), 
		.cin(cout_internal1), 
		.cout(cout_internal2), 
		.s(s[2])
	);
	
	FA_Universal_Structural fa3 (
		.a(a[3]), 
		.b(b[3]), 
		.cin(cout_internal2), 
		.cout(cout), 
		.s(s[3])
	);

endmodule