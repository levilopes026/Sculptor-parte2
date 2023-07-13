#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include "Sculptor.h"

class FiguraGeometrica{
protected:
	float r, g, b, a;
public:
	virtual ~FiguraGeometrica(){};
	virtual void draw(Sculptor &t) = 0; // metodo virtual puro
};

#endif // FIGURAGEOMETRICA_H
