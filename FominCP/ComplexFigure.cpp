#include "ComplexFigure.h"
#include "Circle.h"
#include "Pentagon.h"
using namespace std;
ComplexFigure::ComplexFigure(Circle* _c, Pentagon* _p){
	if ((_c->x == _p->x) && (_c->y == _p->y) && (_c->R == _p->R)) {
		ugol.x = _p->x;
		ugol.y = _p->y;
		ugol.R = _p->R;
		ugol.colors = _p->colors;
		krug.x = _c->x;
		krug.y = _c->y;
		krug.R = _c->R;
		krug.colors = _c->colors;
	}
	else {
		throw coordinate();
	}
};
void ComplexFigure::show() {
	krug.show();
	ugol.show();
}
void ComplexFigure::hide() {
	krug.hide();
	ugol.hide();
}
void ComplexFigure::moveTo(int x1, int y1) {
	krug.moveTo(x1, y1);
	ugol.moveTo(x1, y1);
	krug.show();
	ugol.show();
}