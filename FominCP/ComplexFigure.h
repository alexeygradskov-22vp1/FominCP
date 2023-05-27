#pragma once
#include "Baseclass.h"
#include "Circle.h"
#include "Pentagon.h"
class ComplexFigure : public Baseclass {
private:
	Pentagon ugol;
	Circle krug;
public:
	ComplexFigure(){};
	ComplexFigure(Circle* _c, Pentagon* _p);
	void show()override;
	void hide()override;
	void moveTo(int x1, int y1);
};
