`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:32:14 05/07/2021
// Design Name:   Carry_Look_Ahead_Adder_16bit
// Module Name:   D:/University/CAD/cad/HW02/CLA_16bit_Test.v
// Project Name:  HW02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Carry_Look_Ahead_Adder_16bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CLA_16bit_Test;

	// Inputs
	reg [15:0] A;
	reg [15:0] B;
	reg CIN;

	// Outputs
	wire [15:0] S;
	wire c_cout;
	integer i;
	integer j;
	integer k;
	// Instantiate the Unit Under Test (UUT)
	Carry_Look_Ahead_Adder_16bit uut (
		.A(A), 
		.B(B), 
		.CIN(CIN), 
		.S(S), 
		.c_cout(c_cout)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		CIN = 0;

		// Wait 100 ns for global reset to finish
		for (i = 0; i < 256*256; i = i + 1) begin
				for (j = 0; j < 256*256; j = j + 1) begin
					for (k = 0; k < 2; k  = k + 1) begin

						// waits for 10ns each iteration
						// total simulation time is 1000ns by default
						// to make this work we changed the simulation time to 5120ns (10 * 16 * 16 *2)
						// to change: Right click on Simulate Behavioral Model -> Process Properties -> Simulation Run Time = 5120ns
						#0.00075 {A[15], A[14], A[13], A[12] , A[11], A[10], A[9], A[8] ,A[7], A[6], A[5], A[4] ,A[3], A[2], A[1], A[0] } = i;
						{B[15], B[14], B[13], B[12] , B[11], B[10], B[9], B[8] , B[7], B[6], B[5], B[4] , B[3], B[2], B[1], B[0] } = j;
						{ CIN } = k;
					end
				end
			end
        
		// Add stimulus here

	end
      
endmodule

