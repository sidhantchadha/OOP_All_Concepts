//============================================================================
// Name        : ConstObjects.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Constant Objects in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Sid {
public:
		void printShiz();
		void printShiz2() const;						//note the const keyword after function parenthesis//
};

void Sid::printShiz() {
	cout<<"This is regular object!"<<endl;
}

void Sid::printShiz2() const {						//note the const keyword after function parenthesis//
	cout<<"This is constant object!"<<endl;

}

int main() {
	Sid regOb;
	regOb.printShiz();
	const Sid constOb;			//needs const keyword in function definition and declaration//
	constOb.printShiz2();

}
