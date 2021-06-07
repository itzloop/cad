`timescale 1ns/1ns

module Controlunit(input [5:0] Opcode, 
               input [5:0] Func,
               output reg  ALUSrc,
               output reg  RegDst,
               output reg  RegWrite,
               output reg  [3:0] ALUControl
               );
               
reg [7:0] temp;
reg Branch,B;

always @(*) begin 

    case (Opcode) 
        6'b000000: begin                          // R-type
                    temp <= 3'b101;        

                    case (Func)
							  6'b100000: ALUControl <= 4'b0000;    // ADD 
							  6'b100010: ALUControl <= 4'b0001;    // SUB
							  6'b100100: ALUControl <= 4'b0010;    // AND
							  6'b100101: ALUControl <= 4'b0011;    // OR
							  6'b100110: ALUControl <= 4'b0100;    // XOR
						  endcase
						end
        6'b001000: begin                          // ADDI
                        temp <= 3'b110;  
                        ALUControl <= 4'b0000; 
                    end  

        6'b001100: begin                          // ANDI
                        temp <= 3'b110;  
                        ALUControl <= 4'b0010; 
                    end 

        6'b001101: begin                          // ORI
                        temp <= 3'b110;  
                        ALUControl <= 4'b0011; 
                    end  

        6'b001110: begin                          // XORI
                        temp <= 3'b110;  
                        ALUControl <= 4'b0100; 
                    end       
                        
        6'b001111:  begin                         // LUI
                        temp <= 3'b110;  
                        ALUControl <= 4'b0101; 
                    end          
        default:   temp <= 12'bxxxxxxxxxxxx;      // NOP
    endcase
   

    
    {RegWrite,ALUSrc,RegDst} = temp;

end 

endmodule