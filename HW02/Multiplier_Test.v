`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:19:46 05/06/2021
// Design Name:   Multiplier
// Module Name:   C:/Users/Sina/Documents/ISE Projects/Cad_Team/HW02/Multiplier_Test.v
// Project Name:  HW02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Multiplier
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Multiplier_Test;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [7:0] mul;
	
	integer i, j;

	// Instantiate the Unit Under Test (UUT)
	Multiplier uut (
		.a(a), 
		.b(b), 
		.mul(mul)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		// #100;
		
		for ( i = 0; i < 16; i = i + 1) begin
			for ( j = 0; j < 16; j = j + 1) begin
				#10 a = i;
				b = j;
			end
		end

	end
      
endmodule

