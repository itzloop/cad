`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:50:46 06/07/2021
// Design Name:   Controlunit
// Module Name:   D:/University/CAD/cad/Phase1/ControlUnit_TB.v
// Project Name:  Phase1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Controlunit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ControlUnit_TB;

	// Inputs
	reg [5:0] Opcode;
	reg [5:0] Func;

	// Outputs
	wire ALUSrc;
	wire RegDst;
	wire RegWrite;
	wire [3:0] ALUControl;

	// Instantiate the Unit Under Test (UUT)
	Controlunit uut (
		.Opcode(Opcode), 
		.Func(Func), 
		.ALUSrc(ALUSrc), 
		.RegDst(RegDst), 
		.RegWrite(RegWrite), 
		.ALUControl(ALUControl)
	);

	initial begin
		// Initialize Inputs
		Opcode = 0;
		Func = 0;

		// Wait 100 ns for global reset to finish
		#100;
      Opcode = 6'b000000;
		Func = 6'b100000;
		#100
		Opcode = 6'b000000;
		Func = 6'b100100;
		#100
		Opcode = 6'b000000;
		Func = 6'b100101;
		#100
		Opcode = 6'b000000;
		Func = 6'b100110;
		#100
		Opcode = 6'b001000;
		Func = 6'b000000;
		// Add stimulus here
	end
      
endmodule

