//============================================================================
// Name        : Inheritence.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Inheritence in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Sid {
public:
	Sid();
	void printName();

};

Sid::Sid(){

}

void Sid::printName(){
	cout<<"My name is Sid"<<endl;
}

class Bucky: public Sid {
public:
	Bucky();
	void printThis();

};

Bucky::Bucky(){

}

void Bucky::printThis() {
	cout<<"This is Bucky class!"<<endl;
}

int main() {

	Sid S;
	Bucky B;
	S.printName();		//Usual way of calling functions using object of that same class//
	B.printThis();		//Usual way of calling functions using object of that same class//
	B.printName();		//Function of base class called from derived class//
}
