`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:15:02 05/06/2021
// Design Name:   FA_Universal_Structural
// Module Name:   C:/Users/Sina/Documents/ISE Projects/Cad_Team/HW02/FA_Universal_Structural_Test.v
// Project Name:  HW02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FA_Universal_Structural
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FA_Universal_Structural_Test;

	// Inputs
	reg a;
	reg b;
	reg cin;

	// Outputs
	wire cout;
	wire s;
	
	integer i;

	// Instantiate the Unit Under Test (UUT)
	FA_Universal_Structural uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.cout(cout), 
		.s(s)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		cin = 0;

		// Wait 100 ns for global reset to finish
		//#100;
        
		// Add stimulus here
		
		for (i = 0; i < 8; i = i + 1)
				#10 {a, b, cin} = i;

	end
      
endmodule

