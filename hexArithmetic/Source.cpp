#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool findOper(char num);

int main() {
	
	ifstream infile;
	infile.open("hexOper.txt");

	string inputHex, op1, op2, op;
	int count;
	
	while (!infile.eof()) {

		infile >> inputHex;
		while ()
	}

	return 0;
}

bool findOper(char oper) {
	
	switch (oper) {
		case '+': 
		case '-': 
		case '/':
		case '*':
		case '$': return true;
		default:
			return false;

	}
}
