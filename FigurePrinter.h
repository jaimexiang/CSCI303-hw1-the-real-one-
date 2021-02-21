#ifndef FIGUREPRINTER_H
#define FIGUREPRINTER_H

class FigurePrinter
{
protected:
    int n;
public:
    FigurePrinter();
    FigurePrinter(int x);
    virtual void printFigure() = 0;
};

#endif