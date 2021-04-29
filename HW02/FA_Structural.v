`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:59:49 04/27/2021 
// Design Name: 
// Module Name:    FA_Structural 
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
module FA_Structural(
	input a,
	input b,
	input cin,
	output cout,
	output s
    );

	wire w1, w2, first_xor;
	xor (first_xor, a,b);	
	and (w1, a, b);
	and (w2, first_xor, cin);
	
	
	or ( cout, w1, w2);
	
	xor (s, first_xor, cin);
	
endmodule
