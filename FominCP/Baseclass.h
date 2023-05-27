#pragma once
#include <iostream>
#include <Windows.h>
#include <windowsx.h>
using namespace std;
class Baseclass {
public:
	int x;
	int y;
	int R;
	COLORREF colors;
	HWND hwnd = GetConsoleWindow();
	HDC hdc = GetDC(hwnd);
	RECT rt;
	Baseclass();
	Baseclass(int x1, int y1, int R1);
	void moveTo(int x1, int y1);
	virtual void show() = 0;
	virtual void hide() = 0;
	virtual ~Baseclass();
	class coordinate {};
	class Border{};
};
