#ifndef SIMPLEDATE_H
#define SIMPLEDATE_H

#include <cstdio>
#include <string>

using namespace std;

class SimpleDate
{
private:
    int month, day, year;
public:
    SimpleDate();
    SimpleDate(int m, int d, int y);
    static int calcDaysOfMonth(int m, int y);
    string toString();
    SimpleDate nextDate();
};

#endif