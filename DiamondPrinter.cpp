#include "DiamondPrinter.h"
#include <iostream>

using namespace std;

DiamondPrinter::DiamondPrinter(int x)
{
    this->n = x;
}

void DiamondPrinter::printUpwardTriangleMethod()
{
    int l = 2 - (this->n & 1);
    for (int i = (this->n - 1) / 2; i > 0; i -= 1, l += 2)
    {
        for (int j = 1; j <= i; j += 1)
            cout << ' ';
        for (int j = 1; j <= l; j += 1)
            cout << '*';
        cout << endl;
    }
}

void DiamondPrinter::printFigure()
{
    this->printUpwardTriangleMethod();
    this->printDownwardTriangle();
}