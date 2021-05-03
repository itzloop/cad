`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:13:01 05/03/2021
// Design Name:   Divider
// Module Name:   D:/UNI/CAD/test1/Divider_Test.v
// Project Name:  test1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Divider_Test;
	
	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg start;
	reg clk;
	reg clear;
	
	// Outputs
	wire [3:0] q;
	wire [2:0] r;
	wire busy;
	wire ready;
	wire [1:0] count;
	
	// Instantiate the Unit Under Test (UUT)
	Divider uut (
		.a(a), 
		.b(b), 
		.start(start), 
		.clk(clk), 
		.clear(clear), 
		.q(q), 
		.r(r), 
		.busy(busy),
		.ready(ready), 
		.count(count)
		);
	
	initial begin 
			clear  = 0;
			start = 0;
			clk   = 1;
			a     = 4'h5;
			b     = 4'h4; // first test: 5 = 1 * 4 + 1
			#5   clear  = 1;
			#5   start = 1;
			#10  start = 0;
			#40  start = 1;
			a     = 4'h7;
			b     = 4'h3; // second test: 7 = 2 * 3 + 1
			#10  start = 0;
			#40  start = 1;
			a     = 4'h7;
			b     = 4'h4; // third test: 7 = 1 * 4 + 3
			#10  start = 0;
			#40 start = 1;
			a     = 4'h6;
			b     = 4'h3; // fourth test: 6 = 2 * 3 + 0
			#10  start = 0;
			#40  start = 1;
			a     = 4'h6;
			b     = 4'h2; // fifth test: 6 = 3 * 2 + 0
			#10  start = 0;
			#40  start = 1;
			a     = 4'h8;
			b     = 4'h4; // sixth test: 8 = 2 * 4 + 0
			#10  start = 0;
			#50 $finish;
		end
	always #5 clk = !clk; 
	
endmodule

