`timescale 1ns/1ns

module Controlunit(input [5:0] Opcode, 
               input [5:0] Func,
               output reg  ALUSrc,
               output reg  RegDst,
               output reg  RegWrite,
					output reg 	Shift,
					output reg  MemToReg,
					output reg  MemWrite,
					output reg  [3:0] ALUControl,
					output reg IorD,
					output reg IRWrite,
					output reg Fetch,
					output reg PcWrite
               );
reg [9:0] temp;
reg Branch,B;

integer cycle;

initial begin
	cycle = 0;
end

always @(*) begin 
	case (cycle) 
		0: begin		// fetch
			temp <= 10'b1001000001;
			ALUControl <= 4'b0000;
			cycle = cycle + 1 
		end
		1: begin		// decode
			case (Opcode) 
        	6'b000000: begin                          // R-type
				case (Func)
					6'b100000: begin // ADD
						ALUControl <= 4'b0000;     
						temp <= 10'b0000001000;
						end
					6'b100010: begin // SUB
						ALUControl <= 4'b0000;    
						temp <= 10'b0000001000;
					end
					6'b100100: begin // AND
						ALUControl <= 4'b0000;    
						temp <= 10'b0000001000;
					end
					6'b100101: begin // OR
						ALUControl <= 4'b0000;    
						temp <= 10'b0000001000;
					end	
					6'b100110: begin // XOR
						ALUControl <= 4'b0000;    
						temp <= 10'b0000001000;
					end
					6'b000000: begin // SLL
						ALUControl <= 4'b0000;
						temp <= 6'b0100001000;			
					end	
					6'b000010: begin // SRL
						ALUControl <= 4'b0000;	
						temp <= 6'b0100001000;
					end
				endcase		  
			end
        6'b001000: begin                          // ADDI
			temp <= 10'd0;  
			ALUControl <= 4'd0; 
		end  
        6'b001100: begin                          // ANDI
			temp <= 10'd0;  
			ALUControl <= 4'd0; 
		end 
        6'b001101: begin                          // ORI
			temp <= 10'd0;  
			ALUControl <= 4'd0; 
		end  
        6'b001110: begin                          // XORI
			temp <= 10'd0;  
			ALUControl <= 4'd0; 
		end        
        6'b001111:  begin                         // LUI
			temp <= 10'd0;  
			ALUControl <= 4'd0; 
		end          
		6'b100011:  begin                         // LW
			temp <= 6'b110010;  
			ALUControl <= 4'b0000; 
		end
		6'b101011:  begin                         // SW
			temp <= 10'd0;  
			ALUControl <= 4'd0; 
		end
        default:   temp <= 12'bxxxxxxxxxxxx;      // NOP
			endcase
			cycle = cycle + 1;
		end
		2: begin 	// exec or address computation
			case (Opcode) 
			  6'b000000: begin                          // R-type
				case (Func)
					6'b100000: begin // ADD 
						ALUControl <= 4'b0000;    
						temp <= 10'b0000001000;
					end
					6'b100010: begin // SUB
						ALUControl <= 4'b0001;    
						temp <= 10'b0000001000;
					end
					6'b100100: begin // AND
						ALUControl <= 4'b0010;    
						temp <= 10'b0000001000;
					end
					6'b100101: begin // OR
						ALUControl <= 4'b0011;    
						temp <= 10'b0000001000;
					end
									
					6'b100110: begin // XOR
						ALUControl <= 4'b0100;    
						temp <= 10'b0000001000;
					end
					6'b000000: begin // SLL
						ALUControl <= 4'b0101;
						temp <= 10'b0100000100;			
					end
					6'b000010: begin // SRL
						ALUControl <= 4'b0110;	
						temp <= 10'b0100000100;
					end
				endcase
			end
			  6'b001000: begin                          // ADDI
					temp <= 10'd4;  
					ALUControl <= 4'd0; 
				end  
			  6'b001100: begin                          // ANDI
					temp <= 10'd4;  
					ALUControl <= 4'd2; 
				end 
			  6'b001101: begin                          // ORI
					temp <= 10'd4;   
					ALUControl <= 4'd3; 
				end  
			  6'b001110: begin                          // XORI
					temp <= 10'd4;    
					ALUControl <= 4'd4; 
				end       						
			  6'b001111:  begin                         // LUI
					temp <= 10'd4;    
					ALUControl <= 4'd5; 
				end          
			  6'b100011:  begin                         // LW
					temp <= 10'd4;  
					ALUControl <= 4'd0; 
				end
			  6'b101011:  begin                         // SW
					temp <= 10'd4;  
					ALUControl <= 4'd0; 
				end
			  default:   temp <= 12'bxxxxxxxxxxxx;      // NOP
			endcase
			cycle = cycle + 1;
		end
		3: begin		// memory access or R-type compeletion
			case (Opcode) 
				6'b000000: begin                          // R-type
					case (Func)
						6'b100000: begin // ADD 
							ALUControl <= 4'b0000;    
							temp <= 10'b0000101010;
						end
						6'b100010: begin // SUB
							ALUControl <= 4'b0001;    
							temp <= 10'b0000101010;
						end
						6'b100100: begin // AND
							ALUControl <= 4'b0010;    
							temp <= 10'b0000101010;
						end
						6'b100101: begin // OR
							ALUControl <= 4'b0011;    
							temp <= 10'b0000101010;
						end
										
						6'b100110: begin // XOR
							ALUControl <= 4'b0100;    
							temp <= 10'b0000101010;
						end
						6'b000000: begin // SLL
							ALUControl <= 4'b0101;
							temp <= 10'b0100101010;			
						end
						6'b000010: begin // SRL
							ALUControl <= 4'b0110;	
							temp <= 10'b0100101010;
						end
						endcase
						cycle = 0;
					end
				  6'b001000: begin                          // ADDI
						temp <= 10'b0000100110;  
						ALUControl <= 4'd0; 
						cycle = 0;
					end  

				  6'b001100: begin                          // ANDI
						temp <= 10'b0000100110;  
						ALUControl <= 4'd2; 
						cycle = 0;
					end 

				  6'b001101: begin                          // ORI
						temp <= 10'b0000100110;    
						ALUControl <= 4'd3; 
						cycle = 0;
					end  

				  6'b001110: begin                          // XORI
						temp <= 10'b0000100110;     
						ALUControl <= 4'd4; 
						cycle = 0;
					end       
										
				  6'b001111:  begin                         // LUI
						temp <= 10'b0000100110;     
						ALUControl <= 4'd5; 
						cycle = 0;
					end          
				  6'b100011:  begin                         // LW
						temp <= 10'b0010100100;  
						ALUControl <= 4'd0;
						cycle = cycle + 1;										
					end
				  6'b101011:  begin                         // SW
						temp <= 10'b0000110100;  
						ALUControl <= 4'd0; 
						cycle = cycle + 1;
					end
				  default:   temp <= 12'bxxxxxxxxxxxx;      // NOP
			  endcase
		end
		4: begin		// memory read compeletion
			case (Opcode)          
			  6'b100011:  begin                         // LW
					temp <= 10'b0010100110;  
					ALUControl <= 4'd0; 
				end
			  6'b101011:  begin                         // SW
					temp <= 10'b0000110100;  
					ALUControl <= 4'd0; 
				end
			  default:   temp <= 12'bxxxxxxxxxxxx;      // NOP
		  endcase
		end	
	endcase
    
 {Fetch,Shift,MemToReg,IRWrite,IorD,MemWrite,RegDst,ALUSrc,WriteReg,PCWrite} = temp;

end 

endmodule