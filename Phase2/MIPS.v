`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:37:07 06/13/2021 
// Design Name: 
// Module Name:    MIPS 
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
//`include "mem.v"
`include "ControlUnit.v"
`include "PC.v"
`include "Adder_32.v"
`include "RegistersFile.v"
`include "Mux2_1.v"
`include "SignExtention.v"
`include "ALU.v"
`include "REG_32.v"
`include "mem.v"
module MIPS(
	input clk,
   input reset
    );
wire [31:0] PC, 
				PCNext, 
				Instr, 
				B, 
				A, 
				ReadData1, 
				ReadData2, 
				ALUSrcData1, 
				ALUSrcData2, 
				SignExtended, 
				MemReadData, 
				WriteData, 
				ALUResult, 
				ALUOut, 
				MemAddress,
				memoryDataRegister,
				FetchMuxOut,
				PCAdderMuxOut;
wire RegDst,RegWrite, ALUSrc, MemtoReg, Shift , Zero, MemWrite, PCWrite, IorD, IRWrite, Fetch, PCWrite;
wire [4:0] writeReg;
wire [3:0] ALUControl;
parameter [31:0] FOUR = 4;
REG_32 PC_reg(clk, ALUResult, reset, PCWrite, PC);
Mux2_1 reg_dst_mux(Instr[20:16], Instr[15:11], writeReg, RegDst);
Mux2_1 mem_entry_mux(PC, ALUOut, MemAddress, IorD);
mem memory(clk, MemWrite, MemAddress, B, MemReadData);
REG_32 MDR(clk, MemReadData, reset, 1, memoryDataRegister);
REG_32 IR(clk, MemReadData, reset, IRWrite, Instr);
Mux2_1 writedata_mux(ALUOut, memoryDataRegister, WriteData, MemtoReg);

RegistersFile reg_file( clk, RegWrite, Instr[25:21], Instr[20:16], writeReg, WriteData, ReadData1, ReadData2);
REG_32 AReg(clk, ReadData1, reset, 1, A);
REG_32 BReg(clk, ReadData2, reset, 1, B);
Mux2_1 pc_mux(A, PC, FetchMuxOut, Fetch);
Mux2_1 pc_adder_mux(B, FOUR, PCAdderMuxOut, Fetch);
Mux2_1 alusrc_mux(PCAdderMuxOut, SignExtended, ALUSrcData2, ALUSrc);
SignExtention sign_ext(Instr[15:0], SignExtended);
Mux2_1 shift_mux(FetchMuxOut, B, ALUSrcData1, Shift);
REG_32 ALUOut_reg(clk, ALUResult, reset, 1, ALUOut); 

Controlunit controller(clk, reset, Instr[31:26], Instr[5:0], ALUSrc, RegDst,
                        RegWrite, Shift, MemtoReg, MemWrite, ALUControl, IorD, IRWrite, Fetch, PCWrite);
ALU alu(ALUControl, ALUSrcData1, ALUSrcData2, Instr[10:6], ALUResult, Zero);

// mem dmem(clk,MemWrite,ALUResult, ReadData2, MemReadData);
// Mux2_1 writedata_mux(ALUResult, MemReadData, WriteData, MemtoReg);

//Instruction_Mem imem(PC,Instr);

endmodule
