// #include <iostream>
// #include <fstream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class Distance
// {
// private:
//     float Kilometers;
//     float meters;

// public:
//     Distance()
//     {
//     }
//     Distance(int m)
//     {
//         if (m >= 1000)
//         {
//             int rem = m % 1000;
//             int div = m / 1000;
//             this->Kilometers = div;
//             this->meters = rem;
//         }
//     }

//     Distance *operator+(Distance &temp_Distance)
//     {
//         int total_meters = (this->Kilometers + temp_Distance.Kilometers) * 1000 +
//                            (this->meters + temp_Distance.meters);
//         return new Distance(total_meters);
//     }
//     void Display()
//     {
//         cout << "Kilometers " << Kilometers << " Meters " << meters << endl;
//     }

//     friend ostream &operator<<(ostream &out, const Distance &d)
//     {
//         out << d.Kilometers << " km " << d.meters << " m";
//         return out;
//     }

//     friend istream &operator>>(istream &in, Distance &d)
//     {
//         cout << "Enter kilometers: ";
//         in >> d.Kilometers;
//         cout << "Enter meters: ";
//         in >> d.meters;
//         return in;
//     }
// };
// int main()
// {
//     Distance* d1 = new Distance(1);
//     Distance* d2 = new Distance(0);

//     // Distance d1;
//     cin >> *d1;
//     // Distance d2;
//     cin >> *d2;

//     d1->Display();
//     d2->Display();

//     Distance *result = *d1 + *d2;

//     result->Display();

//     return 0;
// }

// ------------------ Copy And Default Constructors -----------------------
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class A
{
public:
    int arr;
    int size;

    A()
    {
        cout << "Default Constructor " << endl;
    }
    A(A &obj)
    {
        cout << "copy Constructor " << endl;
        // size = s;
    }

    // A add()
    // {
    //     A temp[2]{A(3), A(4)};

    //     return temp[0];
    // }

    ~A()
    {
        cout << "A destructor " << endl;
    }
};

void Test(A temp_Obj_A)
{
    cout << "Test function " << endl;
}
int main()
{
    // A a1[2]{A(3),A(4)};

    // a1[0].add();

    A a1;
    cout << "Helo 1" << endl;
    Test(a1);
    cout << "Helo" << endl;
    return 0;
}