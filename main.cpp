#include "sculptor.h"
#include "FiguraGeometrica.h"
#include "leitor.h"
#include <vector>

int main() {

    vector<FiguraGeometrica*> figuras;
    leitor l;

    figuras = l.interpretador("sculptor.txt");

    Sculptor saturno(l.getDimx(), l.getDimy(), l.getDimz());

    for (int i = 0; i < figuras.size(); i++) {
        figuras[i]->draw(saturno);
    }

    saturno.writeOFF((char*)"bolq.off");

    for (int i = 0; i < figuras.size(); i++) { // libera os new dos draw
        delete figuras[i];
    }

    return 0;
}
