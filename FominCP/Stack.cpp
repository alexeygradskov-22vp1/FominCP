#include"Stack.h"
bool Stack::is_empty() //стек пуст
{
	return figures.empty();
}

void Stack::push(Baseclass* figr)
{
	figures.push(figr);
}

Baseclass* Stack::pop()
{
	Baseclass* result = figures.top();
	figures.pop();
	return result;
}


void Stack::clear()
{
	while (!figures.empty())
	{
		figures.pop();
	}
}

void Stack::showAll()
{
	while(!is_empty()){ 
		figures.top()->show();
		figures.pop();
	}
	
}

void Stack::hideAll()
{
	while (!is_empty()) {
		figures.top()->hide();
		figures.pop();
	}
}
