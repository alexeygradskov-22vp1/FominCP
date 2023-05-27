#include "Circle.h"
using namespace std;
Circle::Circle(int x1, int y1, int R1, COLORREF color):Baseclass(x1, y1, R1) {
	colors = color;
}
void Circle::show() {
	HPEN pen;
	HBRUSH brush;
	pen = CreatePen(PS_SOLID, 2, RGB(0, 0, 0));//граница
	brush = CreateSolidBrush(colors);
	if (((x - R) < 0) || ((x + R) >1920) || ((y - R) <0) || ((y + R) >1080)
		)throw Border();
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	Ellipse(hdc, x-R, y-R,x+R,y+R);
	DeleteObject(pen);
	DeleteObject(brush);
}
void Circle::hide() {
	HPEN pen;
	HBRUSH brush;
	pen = CreatePen(PS_SOLID, 2, RGB(242,242,242));
	brush = CreateSolidBrush(RGB(242, 242, 242));
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	Ellipse(hdc, x - R, y - R, x + R, y + R);
	DeleteObject(pen);
	DeleteObject(brush);
}
