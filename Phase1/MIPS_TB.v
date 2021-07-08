`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:05:44 06/13/2021
// Design Name:   MIPS
// Module Name:   D:/UNI/CAD/Repository/cad/Phase1/MIPS_TB.v
// Project Name:  Phase1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MIPS
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MIPS_TB;

	// Inputs
	reg clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	MIPS uut (
		.clk(clk), 
		.reset(reset)
	);
	always #50 clk=!clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#100;
		repeat(10) begin
			reset=0;
			#100;
      end
      $finish;
        
		// Add stimulus here

	end
      
endmodule

