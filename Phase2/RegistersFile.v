`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:12:44 06/07/2021 
// Design Name: 
// Module Name:    RegistersFile 
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
module RegistersFile(
	 input clk,
    input write_enable,
    input [4:0]read_reg1,
    input [4:0]read_reg2,
    input [4:0]write_reg,
    input [31:0]write_data,
    output [31:0]read_data1,
    output [31:0]read_data2
    );

reg [31:0]registers[31:0];
assign read_data1 = registers[read_reg1];
assign read_data2 = registers[read_reg2];
integer i;
// intialize all registers to zero at startup
initial begin
    
    for (i = 0; i < 32; i = i + 1) begin
            registers[i] <= 32'd0;
    end
end

always @ ( posedge clk ) begin
    registers[0] = 0;
    if (write_enable && write_reg != 0)
        registers[write_reg] = write_data;
	/*  if ( read_reg1 != 0) begin 
			registers[read_reg1] = read_data1;
	  end
	  
	  if ( read_reg2 != 0) begin 
			registers[read_reg2] = read_data2;
	  end*/
end

endmodule
