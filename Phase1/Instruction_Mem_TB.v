`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:30:00 06/11/2021
// Design Name:   Instruction_Mem
// Module Name:   C:/Users/Sina/Documents/ISE Projects/Cad_Team/Phase1/Instruction_Mem_TB.v
// Project Name:  Phase1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Instruction_Mem
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Instruction_Mem_TB;

	// Outputs
	wire data;
	// Inputs
	reg [31:0]address

	// Instantiate the Unit Under Test (UUT)
	Instruction_Mem uut (
		.address(address)
		.read_data(data)
	);

	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

