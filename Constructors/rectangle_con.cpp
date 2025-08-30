#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class rectangle
{
private:
    int length, width;

public:
    rectangle()
    {
        cout << "Hy,I am a default Parameter ";
        length=0;
        width=0;
    }

    rectangle(int a, int b)
    {
        cout << "Hy, I am a parametrized Constructor " << endl;
        length = a;
        width = b;
        cout << length << endl;
        cout << width;
    }

    rectangle(int a)
    {
        length = a;
    }

    rectangle(int &obj)
    {
        cout << "This is a copy constructor ";
        length = obj;
    }

    void dispaly()
    {
        cout << "the value of lenght is " << length;
    }
};

int main()
{
    // rectangle r1;

    rectangle r1(50,30);
    rectangle r3;
    // r3 = r1;
    r3.dispaly();

    // rectangle r3(r1);

    return 0;
}