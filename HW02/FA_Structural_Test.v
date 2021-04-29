`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:12:38 04/27/2021
// Design Name:   FA_Structural
// Module Name:   C:/Users/Sina/Documents/ISE Projects/HW02/FA_Structural_Test.v
// Project Name:  HW02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FA_Structural
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FA_Structural_Test;

	// Inputs
	reg a;
	reg b;
	reg cin;

	// Outputs
	wire cout;
	wire s;

	integer i;

	// Instantiate the Unit Under Test (UUT)
	FA_Structural uut (
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
	end
		// Wait 100 ns for global reset to finish
		// #100;
        
	   always @( a, b, cin)
		begin
		  
			for (i = 0; i < 8; i = i + 1)
				#10 {a, b, cin} = i;

		#10 $stop;
		end
      
endmodule

