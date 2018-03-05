//============================================================================
// Name        : ArrowMemberFunction.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Arrow Member Selection in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Sid {
public: int num;
		void printCrap();
};

void Sid::printCrap() {
	cout<<"This is crap!"<<endl;
}

int main() {
	Sid so;		//object for class Sid//
	so.printCrap();		//normal way of calling function using object//
	Sid *soPtr=&so;		//pointer to object//
	soPtr->printCrap();	//way of calling function using ptr to object//

}
