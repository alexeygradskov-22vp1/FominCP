#pragma once
#include "Baseclass.h"
class Circle:public Baseclass {
public:
	Circle() {};
	Circle(int x1, int y1,int R1, COLORREF color);
	void show() override;
	void hide() override;
	virtual~Circle(){};
};


