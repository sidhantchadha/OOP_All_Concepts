//============================================================================
// Name        : PureVirtualAbstractClass.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Pure virtual function and abstract class in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;

class Enemy {

public:
	virtual void attack()=0;
};

class Monster: public Enemy {
public:
	void attack() {									//Attack function overwrites the virtual attack function//
		cout<<"Monster attack!"<<endl;				// But if it was absent, ERROR will be generated. Derived class//
	}												// has to has to overwrite pure virtual function. Class with pure virtual//
};													// function is called ABSTRACT CLASS.									//

class Ninja: public Enemy {
public:
	void attack() {
		cout<<"Ninja attack!"<<endl;
	}
};

int main() {

	Ninja n;
	Monster m;
	Enemy *e1=&n;
	Enemy *e2=&m;
	e1->attack();
	e2->attack();
}
