#ifndef PUTBOX_H
#define PUTBOX_H

#include "FiguraGeometrica.h"
#include "Sculptor.h"

class putBox : public FiguraGeometrica {
protected:
	int x0, x1, y0, y1, z0, z1;
public:
	putBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1, int _r, int _g, int _b, int _a);
	~putBox() {};
	void draw(Sculptor &t);
};

#endif // PUTBOX_H
