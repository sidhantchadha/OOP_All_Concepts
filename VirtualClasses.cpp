//============================================================================
// Name        : Polymorphism.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Virtual Classes in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Enemy {

public:
	virtual void attack() {
	cout<<"Enemy attack!"<<endl;
}
};

class Monster: public Enemy {
public:
	void attack() {									//Attack function overwrites the virtual attack function//
		cout<<"Monster attack!"<<endl;				// But if it was absent, virtual attack function would be called//
	}
};

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
