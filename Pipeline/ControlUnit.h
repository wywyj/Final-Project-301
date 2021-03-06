#ifndef __CONTROLUNIT_H__
#define __CONTROLUNIT_H__

using namespace std;
#include <string>
#include <map>

//holds the output of the control wires after decode
struct ControlWires{
	int regDst;
	int jump;
	int branch;
	int memRead;
	int memToReg;
	int ALUOp0;
	int ALUOp1;
	int memWrite;
	int ALUSrc;
	int regWrite;
};

class ControlUnit{
public:
	//initialize control unit
	ControlUnit();

	//handles decode stage
	ControlWires process(string opcode);
private:
	//holds output values for particular inputs
	map <string, ControlWires> outputMap;
};


#endif