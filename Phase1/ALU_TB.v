`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:30:02 06/04/2021
// Design Name:   ALU
// Module Name:   D:/UNI/CAD/Repository/Phase1/ALU_tb.v
// Project Name:  Phase1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_TB;

	// Inputs
	reg [3:0] ALUControl;
	reg [31:0] A;
	reg [31:0] B;

	// Outputs
	wire [31:0] ALUResult;
	wire Zero;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.ALUControl(ALUControl), 
		.A(A), 
		.B(B),  
		.ALUResult(ALUResult), 
		.Zero(Zero)
	);

	initial begin
		// Initialize Inputs
		ALUControl = 0;
		A = 0;
		B = 0;

		// Wait 20 ns for global reset to finish
		#20;
		ALUControl= 4'b0000;
		A = 4;
		B = 2;
		
		#20;
		ALUControl= 4'b0001;
		A = 4;
		B = 2;
		
		#20;
		ALUControl= 4'b0101;
		
		#50;
		$stop;
        
		// Add stimulus here

	end
      
endmodule

