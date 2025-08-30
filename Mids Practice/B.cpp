#include <iostream>
using namespace std;

class B
{
private:
    float c;
    static int b;

public:
    static const int H = 5;

    static int getB()
    {
        return b; // Error here
    }

    static void incB()
    {
        b++;
    }

    void show()
    {
        cout << b << "," << c << "," << H << endl;
    }

    void set(float c)
    {
        this->c = c;
    }
};

int B::b = 7;

int main(int argc, char **argv)
{
    cout << B::H << "," << B::getB() << endl;

    B b1, b2;
    b1.set(2.1f);
    b1.incB();
    b2.set(6.1f);
    b2.show();
    b2.incB();
    cout << B::getB();

    // B *b1;
    // cout << "Size of Pointer " << sizeof(b1);
    return 0;
}
