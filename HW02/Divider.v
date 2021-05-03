`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:17:36 05/01/2021 
// Design Name: 
// Module Name:    Divider 
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

module Divider (a,b,q,r,start,busy,ready,count,clear,clk);
	 // a = q * b + r
    input [3:0] a; // 4 bits
    input [3:0] b; // 4 bits
    output [3:0] q;  // quotient
    output [2:0] r;  // remainder
	 input start;   // start signal
    input clk, clear; // clk, clear
    output reg busy; // busy signal
    output reg ready; // ready signal
    output  [1:0] count; // count signal
	 
    reg    [3:0] register_q;
    reg    [3:0] register_r;
    reg    [3:0] register_b;
    reg     [1:0] count;
	 
    wire   [3:0] sub_add = register_r[3]?
                  {register_r[2:0],register_q[3]} + {1'b0,register_b} :
                  {register_r[2:0],register_q[3]} - {1'b0,register_b};
						
    assign q = register_q;
    assign r = register_r[3]? register_r[2:0] + register_b : register_r[2:0];
	 
    always @ (posedge clk or negedge clear) begin
        if (!clear) begin
		      ready <= 0;
            busy  <= 0;
        end else begin
            if (start) begin
                register_q <= a;
                register_b <= b;
                register_r <= 0;
                busy  <= 1;
					 count <= 0;
                ready <= 0;
            end else if (busy) begin
                register_q <= {register_q[2:0],~sub_add[3]};
                register_r <= sub_add;
                count <= count + 1;
                if (count == 3) begin
					     ready <= 1;
                    busy  <= 0;
                end
            end
        end
    end
endmodule

