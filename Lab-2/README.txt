EE 4304 Lab 2
Richard Willis
raw160130

ALU.v: Added necessary instructions in the case(func) statement
ALUControl.v: Added necessary aluFunc cases in the case(func) statement
Control.v: Added the necessary rows to the truth table
TopLevel.vi: Added wire for aluOp and connected appropriate components where necssary:
	opCode was instruction[31:26]
	func was instruciton[5:0]
	aluOp on the CPUControl needed to be connected to aluOp on the ALUControl

The final output of the test register in my design was 32'b100
