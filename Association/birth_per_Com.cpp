#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;
class Birthday
{
private:
    int days, month, year;

public:
    Birthday(int d = 0, int m = 0, int y = 0)
    {
        days = d;
        month = m;
        year = y;
        cout<<"Birthday Constructor Called "<<endl;
    }

    void SetDate(int d, int m, int y)
    {
        days = d;
        month = m;
        year = y;
    }

    void Display() const
    {
        cout << days << "/" << month << "/" << year << endl;
    }

    ~Birthday()
    {
        cout<<"Birthday Destructor Callled "<<endl;
    }
};

class Person
{
private:
    char *name;
    Birthday obj;

public:
    Person(const char *P_name, int d = 0, int m = 0, int y = 0)
    {
        name = new char[strlen(P_name) + 1];
        strcpy(name, P_name);
        obj.SetDate(d, m, y);
        cout<<"Person Constructor Called "<<endl;
    }

    void Display()
    {
        cout << "Name " << name << endl;
        cout << "BirthDay " << endl;
        obj.Display();
    }

    ~Person()
    {
        cout<<"Person Destructor Called "<<endl;
    }
};
int main()
{
    Person obj("Hamza", 25, 12, 2006);
    obj.Display();
    return 0;
}