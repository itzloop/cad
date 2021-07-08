`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:53:27 06/07/2021 
// Design Name: 
// Module Name:    SignExtention 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module SignExtention(
	input [15:0] in,
	output [31:0] out
    );
	 
	 assign out = { {16{in[15]}} , in};

endmodule
