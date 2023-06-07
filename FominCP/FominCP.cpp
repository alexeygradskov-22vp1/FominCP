#include <iostream>
#include "Circle.h"
#include "Pentagon.h"
#include "ComplexFigure.h"
#include "Stack.h"
#include <iostream>

const int NotUsed = system("color F0");

int main()
{
	SetConsoleTitle((LPCWSTR)L"22VP1_23_PentagonCircle");
	setlocale(LC_ALL, "Russian");
	Circle* circle = new Circle(300, 100, 60, RGB(0, 255, 127));
	Circle* circle1 = new Circle(400, 250, 60, RGB(0, 255, 127));
	Pentagon* pentagon = new Pentagon(300, 100, 60, RGB(244, 164, 96));
	Pentagon* pentagon1 = new Pentagon(1000, 350, 60, RGB(244, 164, 96));
	Stack container;
	try {
		ComplexFigure* figure = new ComplexFigure(circle, pentagon);
		container.push(circle1);
		container.push(pentagon1);
		container.push(figure);
		container.showAll();
		Sleep(2000);
		container.hideAll();
		figure->moveTo(530, 300);
	}
	catch (Baseclass::coordinateException& e) {
		cerr << e.what() << endl;
	}
	catch (Baseclass::BorderException& e) {
		cerr << e.what() << endl;
	}
	return 0;
}
