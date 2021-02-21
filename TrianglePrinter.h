#ifndef TRIANGLEPRINTER_H
#define TRIANGLEPRINTER_H

#include "FigurePrinter.h"

class TrianglePrinter: public FigurePrinter
{
protected:
    void printDownwardTriangle();
public:
    TrianglePrinter();
    TrianglePrinter(int x);
    void printFigure();
};

#endif