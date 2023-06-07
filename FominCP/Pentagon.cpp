#include "Pentagon.h"
#include <cmath>
using namespace std;
Pentagon::Pentagon(int x1, int y1, int R1, COLORREF color) :Baseclass(x1, y1, R1) {
	colors = color;
};
void Pentagon::show() {
	HPEN pen;
	HBRUSH brush;
	int x1 = x;
	int y1 = y - R;
	int x2 = x + R * cos(0.31);
	int y2 = y - R * sin(0.31);
	int x3 = x + R * cos(0.94);
	int y3 = y + R * sin(0.94);
	int x5 = x - R * cos(0.31);
	int y5 = y - R * sin(0.31);
	int x4 = x - R * cos(0.94);
	int y4 = y + R * sin(0.94);
	POINT points[] = { {x1,y1},{x2,y2},{x3,y3},
			{x4,y4},{x5,y5} };
	if (y1<0 || x2>rt.right || x5<0 || y3>rt.bottom) {
		throw BorderException("Пятиугольник выходит за границы экрана!");
	}
	pen = CreatePen(PS_SOLID, 2, RGB(0, 0, 0));
	brush = CreateSolidBrush(colors);
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	Polygon(hdc, points, 5);
	DeleteObject(pen);
	DeleteObject(brush);
}
void Pentagon::hide() {
	HPEN pen;
	HBRUSH brush;
	POINT points[] = { {x , y - R},{x + R * cos(0.31), y - R * sin(0.31)},{x + R * cos(0.94), y + R * sin(0.94)},
			{x - R * cos(0.94), y + R * sin(0.94)},{x - R * cos(0.31), y - R * sin(0.31)} };
	pen = CreatePen(PS_SOLID, 2, RGB(242, 242, 242));
	brush = CreateSolidBrush(RGB(242,242 ,242));
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	Polygon(hdc, points, 5);
	DeleteObject(pen);
	DeleteObject(brush);
}
