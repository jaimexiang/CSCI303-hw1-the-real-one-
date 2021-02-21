#include <bits/stdc++.h>
#include "SimpleDate.h"

using namespace std;

class DateException: public exception
{
private:
    string message;
public:
    DateException(string s)
    {
        message = s;
    }
    void print()
    {
        cout << message << endl;
    }
};

void validateInput(int m, int d, int y)
{
    if (m < 1 || m > 12)
        throw DateException("Invalid month!");
    else if (y < 1812 || y > 2030)
        throw DateException("Invalid year!");
    else if (d < 1 || d > SimpleDate::calcDaysOfMonth(m, y))
        throw DateException("Invalid day!");
}

int main(int argc, char const* argv[])
{
    if (argc != 2)
    {
        cout << "Invalid argument!" << endl;
        return 0;
    }
    int m, d, y;
    string arg(argv[1]);
    sscanf(arg.substr(0, 2).c_str(), "%d", &m);
    sscanf(arg.substr(3, 5).c_str(), "%d", &d);
    sscanf(arg.substr(6, 10).c_str(), "%d", &y);
    try
    {
        validateInput(m, d, y);
    }
    catch (DateException e)
    {
        e.print();
        return 0;
    }
    SimpleDate today(m, d, y);
    SimpleDate tomorrow = today.nextDate();
    cout << tomorrow.toString() << endl;
    return 0;
}