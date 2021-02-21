#include "TrianglePrinter.h"
#include <iostream>

using namespace std;

TrianglePrinter::TrianglePrinter()
{
    this->n = 0;
}

TrianglePrinter::TrianglePrinter(int x)
{
    this->n = x;
}

void TrianglePrinter::printDownwardTriangle()
{
    for (int i = 0, l = this->n; l > 0; i += 1, l -= 2)
    {
        for (int j = 1; j <= i; j += 1)
            cout << ' ';
        for (int j = 1; j <= l; j += 1)
            cout << '*';
        cout << endl;
    }
}

void TrianglePrinter::printFigure()
{
    printDownwardTriangle();
}