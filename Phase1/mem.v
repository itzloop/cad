`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:46:21 06/10/2021 
// Design Name: 
// Module Name:    mem 
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
module mem(
	input clk,
	input write_enable,
	input [31:0]address,
	input [31:0]write_data,
	output [31:0] read_data
    );
	 
parameter mem_size = 256;
parameter mem_cell_size = 32;

reg [mem_cell_size - 1:0]mem[mem_size - 1:0];

assign read_data = mem[address];

integer i;

initial begin
	for (i = 0; i < mem_size; i = i + 1) begin
		mem[i] = 32'd0;
	end

end


always @ ( posedge clk ) begin
	if ( write_enable ) begin 
		if ( address < mem_size && address >= 0 ) begin
			mem[address] <= write_data;
		end
	end
end

endmodule
