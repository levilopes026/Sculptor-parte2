#include "cutVoxel.h"

cutVoxel::cutVoxel(int _x, int _y, int _z) {
	x = _x;
	y = _y;
	z = _z;
}

void cutVoxel::draw(Sculptor& t) {
	t.cutVoxel(x, y, z);
}
