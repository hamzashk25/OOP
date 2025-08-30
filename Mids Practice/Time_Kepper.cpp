#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class TimeKeeper
{
private:
    int *TotalMinutes;

public:
    TimeKeeper(int n = 60)
    {
        TotalMinutes = new int;
        *TotalMinutes = n;
    }

    TimeKeeper &operator++(int)
    {
        *TotalMinutes = *TotalMinutes + 1;
        return *this;
    }

    TimeKeeper operator+(TimeKeeper &t)
    {
        TimeKeeper temp_time;
        *temp_time.TotalMinutes = *TotalMinutes + *t.TotalMinutes;
        return temp_time;
    }
    TimeKeeper operator-(TimeKeeper &t)
    {
        TimeKeeper temp_time;
        *temp_time.TotalMinutes = *TotalMinutes - *t.TotalMinutes;
        return temp_time;
    }

    TimeKeeper &operator=(TimeKeeper &t)
    {

        *TotalMinutes = *t.TotalMinutes;
        return *this;
    }
    // void PrintTime()
    // {
    //     int hours = 0;
    //     while (*TotalMinutes > 60)
    //     {
    //         // if (*TotalMinutes > 60)
    //         {
    //             hours = hours + 1;
    //             *TotalMinutes = *TotalMinutes - 60;
    //         }
    //     }
    //     cout << hours << " hours " << *TotalMinutes << " min";
    // }

    void PrintTime()
    {
        int hours = *TotalMinutes / 60;
        int minutes = *TotalMinutes % 60;

        cout << hours << " hours " << minutes << " min";
    }

    ~TimeKeeper()
    {
        delete TotalMinutes;
    }

    friend istream &operator>>(istream &in, TimeKeeper &t);
};

istream &operator>>(istream &in, TimeKeeper &t)
{
    in >> *t.TotalMinutes;
    return in;
}
int main()
{
    TimeKeeper C1(120);
    C1++;

    TimeKeeper C2(150);
    TimeKeeper C5;

    C1.PrintTime();
    cout << endl;

    TimeKeeper C3 = C2 - C1;
    C3.PrintTime();
    cout << endl;

    TimeKeeper C4 = C1 + C1;
    C4.PrintTime();
    cout << endl;

    C4 = C1++;
    cout << "Enter a Time ";
    cin >> C5;

    cout << endl;
    C5.PrintTime();

    cout << endl;
    C1.PrintTime();
    return 0;
}