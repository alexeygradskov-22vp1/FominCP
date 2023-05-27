#pragma once
#include"Baseclass.h"
class Pentagon:public Baseclass {
public:
	Pentagon() {};
	Pentagon(int x1, int y1, int R1, COLORREF color);
	void show() override;
	void hide() override;
	virtual~Pentagon() {};
};
