#include "Baseclass.h"
using namespace std;
Baseclass::Baseclass() {
	hwnd = 0;
	if ((hwnd = GetConsoleWindow()) == 0) {
		cout << "Window not found" << endl;
		return;
	}
	if ((hdc = GetDC(hwnd)) == 0)      
	{
		cout << "Error!!!" << endl;
		return;
	}
	GetClientRect(hwnd, &rt);
}
Baseclass::Baseclass(int x1, int y1, int R1) {
	this->x = x1;
	this->y = y1;
	this->R = R1;
	GetClientRect(hwnd, &rt);
}
Baseclass::~Baseclass() {
	ReleaseDC(hwnd, hdc); 
}

void Baseclass::moveTo(int _x, int _y) {
	hide();
	x = _x;
	y = _y;
	show();
}
void Baseclass::show()
{
}
void Baseclass::hide()
{
}


