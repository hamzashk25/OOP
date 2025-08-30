// ----------------------------  Q1 ----------------------
// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class A
// {

// public:
//     virtual void Display()
//     {
//         cout << "A " << endl;
//     }
// };

// class B : public A
// {
// public:
//     void Display()
//     {
//         cout << "B " << endl;
//     }
// };
// int main()
// {

//     A *pa=new B();

//     pa->Display(); // B
//     // pa->A::Display(); // A
//     return 0;
// }

// ------------------------ Q2 ---

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class A
// {

// public:
//     virtual void Display()
//     {
//         cout << "A " << endl;
//     }

//     virtual ~A()
//     {
//         cout << "A destructor" << endl;
//     }
// };

// class B : public A
// {
// public:
//     void Display()
//     {
//         cout << "B " << endl;
//     }

//     ~B()
//     {
//         cout << "B destructor" << endl;
//     }
// };
// int main() // Dstructor ->child -> parent
// {

//     A *pa = new B();
//     B b;
//     pa->Display(); // B

//     delete pa; // first destructor B then second A

//     b.Display(); // A
//     return 0;
// }

// ------------------------ Abstract class ---------

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Shape
{
protected:
    int area=10;
    int parameter;

public:
    virtual int Area() = 0; // pure virtual function

    virtual int Parameter() = 0;
    // {
    //     return 0;
    // }

    virtual void Display()
    {
        cout << "Area " << area;
    }
};

class Rectangle : public Shape
{

    int len, width;

public:
    Rectangle(int l, int w)
    {
        len = l;
        width = w;
    }

    int Area()
    {
        return len * width;
    }

    int Parameter()
    {
        return 2 * (len + width);
    }
    void Display()
    {
        cout << "Area " << Area() << endl;
        cout << "Parameter " << Parameter() << endl;
    }
};
int main()
{

    Shape *s;

    Rectangle r(10, 20);
    s = &r;
    cout << s->Area() << endl;
    cout << s->Parameter() << endl;
    s->Display(); // Area 200 Parameter 60
    return 0;
}