`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:37:24 04/27/2021
// Design Name:   FA_Data_Flow
// Module Name:   C:/Users/Sina/Documents/ISE Projects/HW02/FA_Data_Flow_Test.v
// Project Name:  HW02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FA_Data_Flow
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FA_Data_Flow_Test;

	// Inputs
	reg a;
	reg b;
	reg cin;

	integer i;

	// Outputs
	wire cout;
	wire s;

	// Instantiate the Unit Under Test (UUT)
	FA_Data_Flow uut (
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
		#100;
        
		// Add stimulus here

	end
	
	
	 always @( a, b, cin)
		begin
		  
			for (i = 0; i < 8; i = i + 1)
				#10 {a, b, cin} = i;

		#10 $stop;
		end
      
endmodule

