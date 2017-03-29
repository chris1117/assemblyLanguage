#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool findOper(char num);
void splitHex(string& op1, string& oper, string& op2, string hexIn, int pos);

int main() {
	
	ifstream infile;
	infile.open("hexOper.txt");

	string inputHex, op1, op2, op;
	int count;
	
	while (!infile.eof()) {

		infile >> inputHex;
		
		while (findOper(inputHex[count]))
			count++;
	}

	return 0;
}

bool findOper(char oper) {
	
	switch (oper) {
		case '+': case '-': case '/': case '*':	case '$': 
			return true;
		default:
			return false;
	}
}

void splitHex(string& op1, string& oper, string& op2, string hexIn, int pos) {

	op1 = hexIn.substr(0, pos);
	oper = hexIn.substr(pos, 1);
	op2 = hexIn.substr(pos + 1, hexIn.size());
}
