//============================================================================
// Name        : MemberInitializers.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Constant Member Initializers in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Sid {
private:
	const int num;
public:
	Sid(int);
	void printShiz();
};

Sid::Sid (int a)
:num(a)						//this is how you initialize constant objects. Can also initialize regular objects like this//
{

}

void Sid::printShiz() {
	cout<<"Initialized with "<<num<<endl;
}


int main() {

	Sid so(5);
	so.printShiz();

}
