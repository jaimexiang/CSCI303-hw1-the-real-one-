#include "SimpleDate.h"

SimpleDate::SimpleDate()
{
    this->month = this->day = this->year = 0;
}

SimpleDate::SimpleDate(int m, int d, int y)
{
    this->month = m;
    this->day = d;
    this->year = y;
}

int SimpleDate::calcDaysOfMonth(int m, int y)
{
    int res;
    if (m <= 7)
    {
        if (m & 1)
            res = 31;
        else if (m == 2)
        {
            if ((y % 4) || ((y % 400) && (y % 100 == 0)))
                res = 28;
            else
                res = 29;
        }
        else
            res = 30;
    }
    else
    {
        if (m & 1)
            res = 30;
        else
            res = 31;
    }
    return res;
}

string SimpleDate::toString()
{
    char tmp[15];
    sprintf(tmp, "%02d/%02d/%04d", this->month, this->day, this->year);
    return string(tmp);
}

SimpleDate SimpleDate::nextDate()
{
    int m = this->month, d = this->day + 1, y = this->year;
    if (d > calcDaysOfMonth(m, y))
        m++, d = 1;
    if (m > 12)
        y++, m = 1;
    return SimpleDate(m, d, y);
}