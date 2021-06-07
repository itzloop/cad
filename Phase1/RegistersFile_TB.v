`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:13:17 06/07/2021
// Design Name:   RegistersFile
// Module Name:   C:/Users/Sina/Documents/ISE Projects/Cad_Team/Phase1/RegistersFile_TB.v
// Project Name:  Phase1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RegistersFile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RegistersFile_TB;

	// Inputs
	reg clk;
	reg write_enable;
	reg [4:0] read_reg1;
	reg [4:0] read_reg2;
	reg [4:0] write_reg;

	// Outputs
	reg [31:0] write_data;
	wire [31:0] read_data1;
	wire [31:0] read_data2;

	// Instantiate the Unit Under Test (UUT)
	RegistersFile uut (
		.clk(clk), 
		.write_enable(write_enable), 
		.read_reg1(read_reg1), 
		.read_reg2(read_reg2), 
		.write_reg(write_reg), 
		.write_data(write_data), 
		.read_data1(read_data1), 
		.read_data2(read_data2)
	);
	
	
	initial begin
		// Initialize Inputs
		clk = 0;
		write_enable = 0;
		read_reg1 = 0;
		read_reg2 = 0;
		write_reg = 0;
		
		// Wait 100 ns for global reset to finish
		#100;
      
		// make reg20 = 10
		write_data = 10;
		write_reg = 5'd20;
		write_enable = 1;
		clk = 1;
		#100;
		clk = 0;
		write_data = 120;
		// now read reg20 it should output 10 in decimal
		write_enable = 0;
		read_reg1 = 5'd20;
		clk = 1;
		#100;
		clk = 0;
		
		write_enable = 1;
		write_reg = 5'd1;
		read_reg2 = 5'd1;
		clk = 1;
		#100;
		clk = 0;
		
		
		
		// Add stimulus here

	end
      
endmodule

