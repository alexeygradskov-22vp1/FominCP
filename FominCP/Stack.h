#pragma once
#include<iostream>
#include<stack>
#include "Baseclass.h"
#include <vector>
using namespace std;
class Stack {
public:
	stack <Baseclass*, vector<Baseclass*>> figures;
	Stack() {};
	void push(Baseclass* figr);
	Baseclass* pop();
	bool is_empty();
	void clear();
	void showAll();
	void hideAll();
};
