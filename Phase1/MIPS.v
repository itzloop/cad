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
`include "mem.v"
`include "Instruction_Mem.v"
`include "ControlUnit.v"
`include "PC.v"
`include "Adder_32.v"
`include "RegistersFile.v"
`include "Mux2_1.v"
`include "SignExtention.v"
`include "ALU.v"
module MIPS(
	input clk,
   input reset
    );
wire [31:0] PC, PCNext, Instr, ReadData1, ReadData2, ALUSrcData1, ALUSrcData2, SignExtended, MemReadData, WriteData, ALUResult;
wire RegDst,RegWrite, ALUSrc, MemtoReg, Shift , Zero, MemWrite;
wire [4:0] writeReg;
wire [3:0] ALUControl;

pc PC_reg(clk, reset, PCNext, PC);
Adder_32 pc_adder(PC, 32'd4, PCNext);
Mux2_1 reg_dst_mux(Instr[20:16], Instr[15:11], writeReg, RegDst);
RegistersFile reg_file( clk, RegWrite, Instr[25:21], Instr[20:16], writeReg, WriteData, ReadData1, ReadData2);
SignExtention sign_ext(Instr[15:0], SignExtended);
Mux2_1 shift_mux(ReadData1, ReadData2, ALUSrcData1, Shift);
Mux2_1 alusrc_mux(ReadData2, SignExtended, ALUSrcData2, ALUSrc);

Controlunit controller(Instr[31:26], Instr[5:0], ALUSrc, RegDst,
                        RegWrite, Shift, MemtoReg, MemWrite, ALUControl);
ALU alu(ALUControl, ALUSrcData1, ALUSrcData2, Instr[10:6], ALUResult, Zero);

mem dmem(clk,MemWrite,ALUResult, ReadData2, MemReadData);
Mux2_1 writedata_mux(ALUResult, MemReadData, WriteData, MemtoReg);

Instruction_Mem imem(PC,Instr);

endmodule
