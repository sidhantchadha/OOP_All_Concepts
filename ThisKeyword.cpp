//============================================================================
// Name        : ThisKeyword.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : 'this' keyword implementation in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Sid {
	private:
		int num;
	public:
		Sid(int);
		void printShiz();

};

Sid::Sid(int a)
:num(a)
{
	//New way of initializing a variable. Nothing goes here//
}

void Sid::printShiz(){

	cout<<"This is normal implementation for var : "<<num <<endl;
	cout<<"This is 'this' keyword implementation this->num for var : "<<this->num <<endl;
	cout<<"This is 'this' keyword implementation (*this).num for var : "<<(*this).num <<endl;
	//This keyword is a special pointer that stores the address of the current object//
}

int main() {

	Sid so(5);
	so.printShiz();
}
