`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:40:32 06/04/2021 
// Design Name: 
// Module Name:    ALU 
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

module ALU(ALUControl, A, B, Immediate, ALUResult, Zero);

	input   [3:0]   ALUControl; // control bits for ALU operation
	input   [31:0]  A, B, Immediate;	    // inputs

	integer temp,i,x;
	reg [31:0] y;
	reg sign;
	output  reg [31:0]  ALUResult;	// answer
	output  reg     Zero;	    // Zero=1 if ALUResult == 0


    always @(ALUControl,A,B)
    begin
		case (ALUControl)
			4'b0000: // ADD
				ALUResult <= A + B;
				
			4'b0001: // SUB
				ALUResult <= A + (~B + 1);
				
			4'b0010: // AND
				ALUResult <= A & B;
				
			4'b0011: // OR
				ALUResult <= A | B;
				
			4'b0100: // XOR
				ALUResult <= A^B;
				
			4'b0101: // LUI
				ALUResult <= Immediate << 16;
				
			4'b0110: // SLL
				ALUResult <= A << (B);
			
			
			4'b0111: // SRL
				ALUResult <= A >> (B);
			
			4'b1000: begin // SRA
				y = A;
				for (i = B; i > 0; i = i - 1) begin
					y = {y[31],y[31:1]};
				end
				ALUResult <= y;
			end
		endcase
	end


	always @(ALUResult) begin
		if (ALUResult == 0) begin
			Zero <= 1;
		end else begin
			Zero <= 0;
		end
	
	end

endmodule
