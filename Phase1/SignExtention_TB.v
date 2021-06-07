`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:56:59 06/07/2021
// Design Name:   SignExtention
// Module Name:   C:/Users/Sina/Documents/ISE Projects/Cad_Team/Phase1/SignExtention_TB.v
// Project Name:  Phase1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SignExtention
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SignExtention_TB;

	// Inputs
	reg [15:0] in;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	SignExtention uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		in = 15;
		#100;
		in = 127;
		#100;
		in  = 32768;
		#100;
		in  = 65535;
        
		// Add stimulus here

	end
      
endmodule

