//============================================================================
// Name        : Composition.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Composition (Using objects of other class in other class) in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Birthday {
private:
	int m,d,y;
public:
	Birthday(int month,int day,int year);
	void printBday();
};

Birthday::Birthday(int month,int day,int year) {
	m=month;
	d=day;
	y=year;
}
void Birthday::printBday(){
	cout<<m<<"/"<<d<<"/"<<y<<endl;
}

class People {
private: string s;
		Birthday bo;
public:
		People(string, Birthday);
		void printInfo();
};

People::People(string name, Birthday bday)
:s(name),bo(bday)
{

}

void People::printInfo() {
	cout<<s<<" was born on: ";
	bo.printBday();
}


int main() {

	Birthday B(02,28,1992);
	People P("Sidhant",B);
	P.printInfo();

}
