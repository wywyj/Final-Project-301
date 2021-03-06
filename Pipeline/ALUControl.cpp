#include "ALUControl.h"
using namespace std;

ALUControl::ALUControl(string functcode, int op1, int op2){

	getALUControl(functcode, op1, op2);
}

string ALUControl::getALUControl(string functionCode, int ALUOp1, int ALUOp2){

	string output ="";
	if( ALUOp1 == 0 && ALUOp2 == 0){
		output = "010";
	}else 
	if( ALUOp1 == 0 && ALUOp2 == 1){
		output = "110";
	}else
	{
		if(functionCode == "100000"){
			output = "010";
		}else
		if(functionCode == "100010"){
			output = "110";
		}else
		if(functionCode == "100100"){
			output = "000";
		}else
		if(functionCode == "100101"){
			output = "001";
		}else
		if(functionCode == "101010"){
			output = "111";
		}
	}
	//cout << output << endl;
	return output;


}
/*
int main() {
	string input = "101010";
	int op1 = 1;
	int op2 = 0;
	ALUControl(input, op1, op2);

}
*/