//============================================================================
// Name        : FriendFunction.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Friend function in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Sid {
private: int var;
public: Sid(int a) {
	var=a;
}

friend void printShiz(Sid &so);						//Use friend keyword before prototype//

};

void printShiz(Sid &so) {							//No friend keyword to be used here//
	cout<<"The variable was: "<<so.var;
}



int main() {

	Sid s(5);
	printShiz(s);			//Gets access to members of a class//
}
