#pragma once
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <exception>
#include <windowsx.h>
using namespace std;
class Baseclass {
public:
	int x;
	int y;
	int R;
	COLORREF colors;
	HWND hwnd = GetConsoleWindow();
	RECT rt;
	HDC hdc = GetDC(hwnd);
	Baseclass();
	Baseclass(int x1, int y1, int R1);
	void moveTo(int x1, int y1);
	virtual void show();
	virtual void hide();
	virtual ~Baseclass();


	class coordinateException : public std::exception {
	private:
		string _message;
	public:
		coordinateException(string message) {
			_message = message;
		}

		string what() {
			return _message;
		}
	};

	class BorderException: public std::exception{
	private:
		string _message;
	public:
		BorderException(string message) {
			_message = message;
		}

		string what() {
			return _message;
		}
	};
};
