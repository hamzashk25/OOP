#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Time
{
private:
    int hr, min, sec;

public:
    Time()
    {
        hr = min = sec = 0;
    }

    Time(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }

    void sethr(int h)
    {
        hr = h;
    }

    void setmin(int m)
    {
        min = m;
    }

    void setSec(int s)
    {
        sec = s;
    }

    int gethr()
    {
        return hr;
    }

    int getmin()
    {
        return min;
    }

    int getSec()
    {
        return sec;
    }

    void IncHr();
    void IncMin();
    void IncSec();
    void DisplayTime();
    bool Compare(Time &);
};

void Time ::IncHr()
{
    hr++;
    if (hr > 24)
    {
        hr = 0;
    }
}

void Time ::IncMin()
{
    min++;
    if (min > 59)
    {
        min = 0;
        IncHr();
    }
}

void Time::IncSec()
{
    sec++;
    if (sec > 59)
    {
        sec = 0;
        IncMin();
    }
}

bool Time ::Compare(Time &t)
{
    if (t.gethr() == hr && t.getmin() == min && t.getSec() == sec)
    {
        return true;
    }
    else
        return false;
}

void Time::DisplayTime()
{
    cout << hr << ":" << min << ":" << sec;
}

int main()
{
    Time t1(12, 30, 10);
    Time t2(8, 45, 10);

    // t1.sethr(8);
    // t1.setmin(45);
    // t1.setSec(10);

    Time t3(t1);

    t1.DisplayTime();
    cout << endl;

    t2.DisplayTime();
    cout << endl;

    t3.DisplayTime();

    if (t3.Compare(t1))
        cout << " Equal";
    else
        cout << " Not Equal ";

    return 0;
}