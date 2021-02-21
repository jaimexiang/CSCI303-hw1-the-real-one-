#include "SquarePrinter.h"
#include <iostream>

using namespace std;

SquarePrinter::SquarePrinter(int x)
{
    this->n = x;
}

void SquarePrinter::printFigure()
{
    for (int i = 1; i <= this->n; i += 1)
    {
        for (int j = 1; j <= this->n; j += 1)
            cout << '*';
        cout << endl;
    }
}