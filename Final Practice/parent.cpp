#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Parent
{

public:
    Parent()
    {
        cout << "Parent Default Constructor " << endl;
    }

    virtual void Display()
    {
        cout << "Parent Display " << endl;
    }
    ~Parent()
    {
        cout << "Parent Destructor " << endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "Child Default Constructor " << endl;
    }

    void Display()
    {
        cout << "Child Display " << endl;
    }

    ~Child()
    {
        cout << "Child Destructor " << endl;
    }
};

int main()
{
    Parent *p;
    // Child c;

    Child *c = new Child();
    p = c;

    p->Display();
    // delete c;
    // delete p;
    // delete new Child;

    // c->~Child();

    cout << "Hello World " << endl;
    delete p;
    return 0;
}