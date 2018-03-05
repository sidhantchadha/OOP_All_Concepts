//============================================================================
// Name        : ClassTemplates.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Class Templates in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <class T>
class Sid {
private:
	T num;
public:
	T printCrap(T);
};

template <class T>
T Sid <T> ::printCrap(T val) {
	if(val>10)
		return val;
	else
		return val+10;
}


int main() {
	Sid<int>S;
	cout<<S.printCrap(4)<<endl;
	Sid<double>S2;
	cout<<S2.printCrap(12.25)<<endl;

}
