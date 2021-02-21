#ifndef DIAMONDPRINTER_H
#define DIAMONDPRINTER_H

#include "TrianglePrinter.h"

class DiamondPrinter: public TrianglePrinter
{
private:
    void printUpwardTriangleMethod();
public:
    DiamondPrinter(int x);
    void printFigure();
};

#endif