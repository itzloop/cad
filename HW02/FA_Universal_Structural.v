`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:56:32 05/06/2021 
// Design Name: 
// Module Name:    FA_Universal_Structural 
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
module FA_Universal_Structural(
	input a,
	input b,
	input cin,
	output cout,
	output s
    );
	 
	wire w1, w2, first_xor;

	
	// xor (first_xor, a,b);	
	Universal_XOR uxor(
		.a(a),
		.b(b),
		.out(first_xor)
	);
	and (w1, a, b);
	and (w2, first_xor, cin);
	
	
	or ( cout, w1, w2);
	
	// xor (s, first_xor, cin);
	Universal_XOR uxor2(
		.a(first_xor),
		.b(cin),
		.out(s)
	);


endmodule


module Universal_XOR(
	input a,
	input b,
	output out
);

wire w1, w2, w3;

nand(w1, a, b);
nand(w2, a, w1);
nand(w3, b, w1);
nand(out, w2, w3);

endmodule
