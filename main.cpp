#include <bits/stdc++.h>
#include "FigurePrinter.h"
#include "TrianglePrinter.h"
#include "DiamondPrinter.h"
#include "SquarePrinter.h"

using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    sscanf(argv[1], "%d", &n);
    cout << "The triangle:" << endl;
    FigurePrinter* triangle = new TrianglePrinter(n);
    triangle->printFigure();
    cout << "The diamond:" << endl;
    FigurePrinter* diamond = new DiamondPrinter(n);
    diamond->printFigure();
    cout << "The square:" << endl;
    FigurePrinter* square = new SquarePrinter(n);
    square->printFigure();
    return 0;
}