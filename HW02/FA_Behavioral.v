`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:38:54 04/27/2021 
// Design Name: 
// Module Name:    FA_Behavioral 
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
module FA_Behavioral(
	input a,
	input b,
	input cin,
	output cout,
	output s
    );

		assign s = a ^ b ^ cin;
		assign cout = (a & b)  |  (a & cin)  |  (b & cin);

endmodule
