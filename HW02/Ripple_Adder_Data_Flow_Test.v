`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:34:41 04/29/2021
// Design Name:   Ripple_Adder_Data_Flow
// Module Name:   C:/Users/Sina/Documents/ISE Projects/HW02/Ripple_Adder_Data_Flow_Test.v
// Project Name:  HW02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Ripple_Adder_Data_Flow
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Ripple_Adder_Data_Flow_Test;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg cin;

	// Outputs
	wire [3:0] s;
	wire cout;
	
	integer i, j, k;

	// Instantiate the Unit Under Test (UUT)
	Ripple_Adder_Data_Flow uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.s(s), 
		.cout(cout)
	);

	initial begin
		// Initialize Inputs
		a = 4'b0000;
		b = 4'b0000;
		cin = 0;

			
			for (i = 0; i < 16; i = i + 1) begin
				for (j = 0; j < 16; j = j + 1) begin
					for (k = 0; k < 2; k  = k + 1) begin

						// waits for 10ns each iteration
						// total simulation time is 1000ns by default
						// to make this work we changed the simulation time to 5120ns (10 * 16 * 16 *2)
						// to change: Right click on Simulate Behavioral Model -> Process Properties -> Simulation Run Time = 5120ns
						#10 {a[3], a[2], a[1], a[0] } = i;
						{b[3], b[2], b[1], b[0] } = j;
						{ cin } = k;
					end
				end
			end
	end
	
      
endmodule

