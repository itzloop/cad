`timescale 1ns/1ns

module Controlunit(input [5:0] Opcode, 
               input [5:0] Func,
               output reg  ALUSrc,
               output reg  RegDst,
               output reg  RegWrite,
					output reg 	Shift,
					output reg  MemToReg,
					output reg  MemWrite,
               output reg  [3:0] ALUControl
               );
               
reg [7:0] temp;
reg Branch,B;

always @(*) begin 

    case (Opcode) 
        6'b000000: begin                          // R-type
                    case (Func)
							  6'b100000: begin 
												ALUControl <= 4'b0000;    // ADD 
												temp <= 6'b101000;
											 end
							  6'b100010: begin
												ALUControl <= 4'b0001;    // SUB
												temp <= 6'b101000;
											 end
							  6'b100100: begin 
												ALUControl <= 4'b0010;    // AND
												temp <= 6'b101000;
											 end
							  6'b100101: begin
												ALUControl <= 4'b0011;    // OR
												temp <= 6'b101000;
											 end
											 
							  6'b100110: begin 
												ALUControl <= 4'b0100;    // XOR
												temp <= 6'b101000;
											 end
							  6'b000000: begin
												ALUControl <= 4'b0110;
												temp <= 6'b101100;			// SLL
											 end
							  6'b000010: begin
												ALUControl <= 4'b0111;	// SRL
												temp <= 6'b101100;
											 end
						  endcase
						end
        6'b001000: begin                          // ADDI
                        temp <= 6'b110000;  
                        ALUControl <= 4'b0000; 
                    end  

        6'b001100: begin                          // ANDI
                        temp <= 6'b110000;  
                        ALUControl <= 4'b0010; 
                    end 

        6'b001101: begin                          // ORI
                        temp <= 6'b110000;  
                        ALUControl <= 4'b0011; 
                    end  

        6'b001110: begin                          // XORI
                        temp <= 6'b110000;  
                        ALUControl <= 4'b0100; 
                    end       
                        
        6'b001111:  begin                         // LUI
                        temp <= 6'b110000;  
                        ALUControl <= 4'b0101; 
                    end          
		  6'b100011:  begin                         // LW
                        temp <= 6'b110010;  
                        ALUControl <= 4'b0000; 
                    end
		  6'b101011:  begin                         // SW
                        temp <= 6'b010011;  
                        ALUControl <= 4'b0000; 
                    end

        default:   temp <= 12'bxxxxxxxxxxxx;      // NOP
    endcase
   

    
    {RegWrite,ALUSrc,RegDst,Shift,MemToReg,MemWrite} = temp;

end 

endmodule