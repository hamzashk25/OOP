// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// // template <class T>

// // class vector
// // {
// // public:
// //     T *arr;
// //     int size;

// //     vector(int s)
// //     {
// //         size = s;
// //         arr = new T[size];
// //     }

// //     T dotproduct(vector<float> v2)
// //     {
// //         float d = 0;
// //         for (int i = 0; i < size; i++)
// //         {
// //             d += this->arr[i] * v2.arr[i];
// //         }
// //         return d;
// //     }
// //     void Display()
// //     {
// //         cout << arr;
// //     }
// //     ~vector()
// //     {
// //         delete[] arr;
// //     }
// // };

// template <class T1=int>
// void Swapp(T1 &x, T1 &y)
// {
//     T1 temp = x;
//     x = y;
//     y = temp;
// }
// int main()
// {
//     // vector<int> v1(3);

//     // v1.arr[0] = 1.4;
//     // v1.arr[1] = 2.2;
//     // v1.arr[2] = 3.5;

//     // vector<float> v2(3);
//     // v2.arr[0] = 4.1;
//     // v2.arr[1] = 0.29;
//     // v2.arr[2] = 3.1;

//     // float d = v1.dotproduct(v2);
//     // cout << d << endl;

//     float a = 13.4;
//     float b = 7.2;
//     Swapp(a, b);

//     cout << a << " " << b << endl;

//     // v1.Display();
//     return 0;
// }

// ----------------- 2 ---------

#include <iostream>
using namespace std;

template <class T1 = int>
class MyClass
{
public:
    T1 data;

    MyClass(T1 d) : data(d) {}

    void display()
    {
        cout << "Data: " << data << endl;
    }
};

int main()
{
    MyClass<> obj1(42.23); // Uses default type int
    obj1.display();        // Output: Data: 42

    MyClass<double> obj2(3.14); // Uses specified type double
    obj2.display();             // Output: Data: 3.14

    MyClass<string> obj3("Hello"); // Uses type string
    obj3.display();                // Output: Data: Hello

    return 0;
}