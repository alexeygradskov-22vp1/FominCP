#include "Pentagon.h"
#include <cmath>
using namespace std;
Pentagon::Pentagon(int x1, int y1, int R1, COLORREF color) :Baseclass(x1, y1, R1) {
	colors = color;
};
void Pentagon::show() {
	HPEN pen;
	HBRUSH brush;
	POINT points[] = { {x , y - R},{x + R * cos(0.31), y - R * sin(0.31)},{x + R * cos(0.94), y + R * sin(0.94)},
			{x - R * cos(0.94), y + R * sin(0.94)},{x - R * cos(0.31), y - R * sin(0.31)} };
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
