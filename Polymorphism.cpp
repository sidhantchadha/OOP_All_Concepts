//============================================================================
// Name        : Polymorphism.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Polymorphism in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Enemy {
protected:
	int attackpower;
public:
	void attackPower(int a) {
	attackpower=a;
}
};

class Monster: public Enemy {
public:
	void attack() {
		cout<<"This is monster with attack "<<attackpower<<endl;
	}
};

class Ninja: public Enemy {
public:
	void attack() {
		cout<<"This is ninja with attack "<<attackpower<<endl;
	}
};

int main() {
	Monster m;
	Ninja n;
	Enemy *E1=&n;					//Enemy object pointer to Ninja object//
	Enemy *E2=&m;					//Enemy onject pointer to Monster object//
	E1->attackPower(20);				//Initializing variables using arrow member selection//
	E2->attackPower(30);				//Initializing variables using arrow member selection//
	m.attack();						//Calling individual functions using class objects//
	n.attack();						//Calling individual functions using class objects//
}
