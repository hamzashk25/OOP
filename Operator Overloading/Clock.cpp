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
        hr = 02;
        min = 00;
        sec = 00;
    }

    Time operator++() // Pre Increment Operator Defination
    {
        sec++;
        if (sec > 59)
        {
            sec = 00;
            min++;
        }
        if (min > 59)
        {
            min = 0;
            hr++;
        }

        if (hr > 24)
        {
            hr = 1;
        }
        return *this;
    }

    Time operator++(int) // Post Increment Operator Defination
    {
        sec++;
        if (sec > 59)
        {
            sec = 00;
            min++;
        }
        if (min > 59)
        {
            min = 0;
            hr++;
        }

        if (hr > 24)
        {
            hr = 1;
        }
        return *this;
    }

    Time operator--() // Pre Decrement Operator Defination
    {
        sec--;
        if (sec < 0)
        {
            sec = 59;
            min--;
        }
        if (min < 0)
        {
            min = 59;
            hr--;
        }
        if (hr < 0)
        {
            hr = 24;
        }
    }

    Time operator--(int) // Post Decrement Operator Defination
    {
        sec--;
        if (sec < 0)
        {
            sec = 59;
            min--;
        }
        if (min < 59)
        {
            min = 59;
            hr--;
        }
        if (hr < 1)
        {
            hr = 24;
        }
    }

    bool operator==(Time &t)
    {
        if (hr == t.hr && min == t.min && sec == t.sec)
        {
            return true;
        }

        return false;
    }

    bool operator>(Time &t)
    {
        if (hr > t.hr)
        {
            if (hr > t.hr || min > t.min)
                if (hr > t.hr || min > t.min || sec > t.sec)
                    cout << "Yes" << endl;
        }
        else
            cout << "NO " << endl;

        return false;
    }

    friend ostream &operator<<(ostream &out, const Time &t);

    friend istream &operator>>(istream &in, Time &t);

    // void Display()
    // {
    //     cout << "Time " << hr << ":" << min << ":" << sec << endl;
    // }
};

ostream &operator<<(ostream &out, const Time &t)
{
    out << "Time " << t.hr << ":" << t.min << ":" << t.sec << endl;
}

istream &operator>>(istream &in, Time &t)
{
    int temp;
    cout << "Enter a value ";
    in >> temp;
}
int main()
{
    Time t1;
    // ++t1; // Pre Increment
    --t1; // Pre Decrement
    Time t2;

    cout << t1; // t1.Display()
    cout << t2; // t2.Display();

    if (t2 == t1)
        cout << "Both time are Equal " << endl;
    else
        cout << "Both Time are Different " << endl;

    t2 > t1;

    return 0;
}