module ALU(inA, inB, func, out, zero);

	parameter WORD = 32;
	
    input wire [WORD - 1:0] inA;
    input wire [WORD - 1:0] inB;
    
    input wire [2:0] func;

    output wire zero;
    output reg [WORD - 1:0] out;


    always @* begin
        case(func)
		3'b010: out <= inA + inB;
		3'b110: out <= inA - inB;
		3'b110: out <= inA & inB;
		3'b001: out <= inA | inB; 
        endcase
    end

    assign zero = out ? 1'b0 : 1'b1;

endmodule
