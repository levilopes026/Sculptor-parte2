#ifndef SCULPTOR_H
#define SCULPTOR_H

struct Voxel {
	float r, g, b; // Cores
	float a; // Transparencia
	bool isOn; // Incluido ou nao
};

class Sculptor {
protected:
	Voxel*** v; // 3D matrix
	int nx, ny, nz; // Dimensões
	float r, g, b, a; // Cores e transparencia
public:
	Sculptor(int _nx, int _ny, int _nz);
	~Sculptor();
	void setColor(float r, float g, float b, float alpha);
	void putVoxel(int x, int y, int z);
	void cutVoxel(int x, int y, int z);
	int getnx(void);
	int getny(void);
	int getnz(void);
	void writeOFF(char* filename);
};

#endif // SCULPTOR_H
