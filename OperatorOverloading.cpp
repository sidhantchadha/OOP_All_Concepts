//============================================================================
// Name        : OperatorOverloading.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Operator Overloading in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Sid {

public:
	int num;						//Variable needs to be public so that it can be accessed by S3 object declared in main//
	Sid();
	Sid(int);
	Sid operator+(Sid);
};

Sid::Sid(){
	num=10;
}

Sid::Sid(int x)
:num(x)
{

}

Sid Sid::operator +(Sid so) {
	Sid newOb;
	newOb.num= num+ so.num;
	return newOb;
}



int main() {
	Sid S1(10);
	Sid S2(20);
	Sid S3;
	S3=S1+S2;
	cout<<S3.num;
}
