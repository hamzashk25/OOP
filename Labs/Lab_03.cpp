// --------------------------Task 01--------------------
// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class points
// {
// private:
//     int x, y;

// public:
//     points()
//     {
//         cout << "Hy, I am a default Constructor "<<endl;
//         x = 0;
//         y = 0;
//     }

//     void Display()
//     {
//         cout << "Value of y : " << y << endl;
//         cout << "Value of X : " << x << endl;
//     }
// };
// int main()
// {
//     points p1;
//     p1.Display();
//     return 0;
// }

// ------------------------------Task 02----------------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class points
// {
// private:
//     int x, y;

// public:
//     points()
//     {
//         cout << "Hy, I am a default Constructor "<<endl;
//         x = 0;
//         y = 0;
//     }

//     points(int a,int b)
//     {
//         cout << "Hy, I am a Parametrized Constructor "<<endl;
//         x = a;
//         y = b;
//     }
//     void Display()
//     {
//         cout << "Value of x : " << x << endl;
//         cout << "Value of y : " << y << endl;
//     }
// };
// int main()
// {
//     points p1(10,20);
//     p1.Display();
//     return 0;
// }

// ------------------------------Task 03----------------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class points
// {
// private:
//     int x, y;

// public:
//     points()
//     {
//         cout << "Hy, I am a default Constructor " << endl;
//         x = 0;
//         y = 0;
//     }

//     points(int a, int b)
//     {
//         cout << "Hy, I am a Parametrized Constructor " << endl;
//         x = a;
//         y = b;
//     }

//     points(points &obj)
//     {
//         cout << "Hy, I am a Copy Constructor " << endl;
//         x = obj.x;
//         y = obj.y;
//     }
//     void Display()
//     {
//         cout << "Value of x : " << x << endl;
//         cout << "Value of y : " << y << endl;
//     }
// };
// int main()
// {
//     points p1(1000, 20);

//     p1.Display();
//     points p2(p1);
//     p2.Display();
//     return 0;
// }

// ------------------------------Task 04----------------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class points
// {
// private:
//     int x, y;

// public:
//     points()
//     {
//         cout << "Hy, I am a default Constructor "<<endl;
//         x = 0;
//         y = 0;
//     }

//     points(int a,int b)
//     {
//         cout << "Hy, I am a Parametrized Constructor "<<endl;
//         x = a;
//         y = b;
//     }

//     void Display()
//     {
//         cout << "Value of x : " << x << endl;
//         cout << "Value of y : " << y << endl;
//     }

//     ~points()
//     {
//         cout<<"Hy, I am a Destructor "<<endl;
//     }
// };
// int main()
// {
//     points p1(1000,20);
//     points p2(p1);
//     p1.Display();
//     p2.Display();
//     return 0;
// }

// ------------------------------Task 04----------------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Rectangle
// {
// private:
//     int lenght, width;

// public:
//     int A, P;

//     Rectangle()
//     {
//         lenght = 0;
//         width = 0;
//     }

//     Rectangle(int a, int b)
//     {
//         cout<<"Hy, Iam a parameterized constructor "<<endl;
//         lenght = a;
//         width = b;
//     }

//     Rectangle(Rectangle &obj)
//     {
//         cout<<"Hy, I am a Copy constructor "<<endl;
//         lenght = obj.lenght;
//         width = obj.width;
//     }

//     void Calculate_Area()
//     {
//         cout<<"Helo"<<endl;
//         A = lenght * width;
//     }

//     void Perimeter()
//     {
//         cout<<"Hello"<<endl;
//         P = 2 * lenght * width;
//     }

//     void Display()
//     {
//         cout << "Area of Rectangle is " << A << endl;
//         cout << "Perimeter of Rectangle is " << P << endl;
//     }

//     ~Rectangle()
//     {
//         cout<<"Hy, I am a Destructor "<<endl;
//     }
// };
// int main()
// {
//     Rectangle r1(10, 20);
//     Rectangle r2(r1);

//     r1.Calculate_Area();
//     r1.Perimeter();
//     r1.Display();
//     return 0;
// }

// --------------------------------Task 06------------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Circle
// {
// private:
//     int radius;
//     string color;

// public:
//     Circle()
//     {
//         radius = 0;
//         color = "BLUE";
//     }

//     Circle(int a, string b)
//     {
//         radius = a;
//         color = b;
//     }

//     void Display()
//     {
//         cout << "radius " << radius << endl;
//         cout << "Color " << color << endl;
//     }
// };

// int main()
// {
//     Circle C1;
//     Circle C2(10, "Yellow");
//     Circle C3(10, "Red");
//     Circle C[3] = {C3, C1, C2};

//     for (int i = 0; i < 3; i++)
//     {
//         C[i].Display();
//     }

//     return 0;
// }

// ---------------------------------Task 07------------------

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class person
{
private:
    string name, gender;
    int age;

public:
    person()
    {
        name = "hamza";
        age = 20;
        gender = "Male";
    }

    person(string n, int a)
    {
        name = n;
        age = a;
    }

    person(string n, int a, string g)
    {
        name = n;
        age = a;
        gender = g;
    }

    void Display()
    {
        cout << "Name " << name << endl;
        cout << "Age " << age << endl;
        cout << "Gender " << gender << endl;
    }
};

int main()
{
    person St1("Ali", 2);
    person St2("Kiran", 34, "Female");
    person St3 = St1;
    person St4;
    St4.Display();
    return 0;
}

// ----------------------------------Task 08------------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Account_Detail
// {
// private:
//     string name;
//     int age;
//     float balance;

// public:
//     Account_Detail()
//     {
//         name = "Hamza";
//         age = 18;
//         balance = 25000;
//     }

//     Account_Detail(string n, int a, float b)
//     {
//         name = "Awais";
//         age = 20;
//         balance = 50000;
//     }

//     Account_Detail(Account_Detail &obj)
//     {
//         name = obj.name;
//         age = obj.age;
//         balance = obj.balance;
//     }

//     void Dispaly()
//     {
//         cout << "Name " << name << endl;
//         cout << "Age " << age << endl;
//         cout << "Balance " << balance << endl;
//     }
// };
// int main()
// {
//     Account_Detail A1;
//     Account_Detail A2(A1);

//     A2.Dispaly();
//     return 0;
// }