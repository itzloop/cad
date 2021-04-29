`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:57:21 04/27/2021 
// Design Name: 
// Module Name:    FA_Data_Flow 
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
module FA_Data_Flow(
	input a,
	input b,
	input cin,
	output cout,
	output s
    );
	 assign first_xor = a ^ b;
	 assign w1 = a * b;
	 assign w2 = first_xor * cin;
	 
	 assign cout = w1 + w2;
	 assign s = first_xor ^ cin;


endmodule
