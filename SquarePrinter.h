#ifndef SQUAREPRINTER_H
#define SQUAREPRINTER_H

#include "FigurePrinter.h"

class SquarePrinter: public FigurePrinter
{
public:
    SquarePrinter(int x);
    void printFigure();
};

#endif