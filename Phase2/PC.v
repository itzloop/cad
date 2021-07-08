`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:16:54 06/13/2021 
// Design Name: 
// Module Name:    PC 
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
module pc(clk, rst, d, q);
    parameter n = 32;
    input clk, rst;
    input [n-1:0] d;
    output reg [n-1:0] q;

    always @(posedge clk) begin
        if (rst) begin
            //Reset logic goes here.
            q<= 0;
        end
        else begin
            //Sequential logic goes here.
            q <= d;
        end
    end
endmodule