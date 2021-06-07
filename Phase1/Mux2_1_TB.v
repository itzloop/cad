`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:49:17 06/07/2021
// Design Name:   Mux2_1
// Module Name:   C:/Users/Sina/Documents/ISE Projects/Cad_Team/Phase1/Mux2_1_TB.v
// Project Name:  Phase1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mux2_1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Mux2_1_TB;

	// Inputs
	reg [31:0] a;
	reg [31:0] b;
	reg s;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	Mux2_1 uut (
		.a(a), 
		.b(b), 
		.out(out), 
		.s(s)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 12;
		s = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		s = 1; // out should be 12 here
		#100;
		
        
		// Add stimulus here

	end
      
endmodule

