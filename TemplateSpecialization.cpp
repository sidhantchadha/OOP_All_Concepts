//============================================================================
// Name        : TemplateSpecialization.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Template Specialization in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <class T>
class Sid {

public:
	Sid(T x) {
		cout<<x<<" is not a character."<<endl;
	}
};

template<>														//Just to deal with character arguments differently//
class Sid <char> {												//This is the way it Template specialization is declared//

public:
	Sid(char x) {
		cout<<x<<" is a character."<<endl;
	}

};

int main() {
	Sid<int>S1(10);
	Sid<double>S2(2.34);
	Sid<char>S3('a');
}
