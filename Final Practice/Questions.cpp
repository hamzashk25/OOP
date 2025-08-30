// ------------------------ 1 --------------------
// #include <iostream>
// using namespace std;

// class A {
// public:
//     virtual void show() {
//         cout << "A\n";
//     }
// };

// class B : public A {
// public:
//     void show() {
//         cout << "B\n";
//     }
// };

// int main() {
//     A* ptr;
//     B obj;
//     ptr = &obj;
//     ptr->show();
// }

// ------------------------ 2 --------------------
// #include <iostream>
// using namespace std;

// class A {
// public:
//     void show() {
//         cout << "A\n";
//     }
// };

// class B : public A {
// public:
//     void show() {
//         cout << "B\n";
//     }
// };

// int main() {
//     A* ptr = new B;
//     ptr->show();
// }

// ------------------------ 3 --------------------
// #include <iostream>
// using namespace std;

// class Base {
// public:
//     Base() { cout << "Base Constructor\n"; }
//     virtual ~Base() { cout << "Base Destructor\n"; }
// };

// class Derived : public Base {
// public:
//     Derived() { cout << "Derived Constructor\n"; }
//     ~Derived() { cout << "Derived Destructor\n"; }
// };

// int main() {
//     Base* b = new Derived();
//     delete b;
// }

// ------------------------ 4 --------------------
// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void speak() = 0;
// };

// class Dog : public Animal {
// public:
//     void speak() {
//         cout << "Woof!\n";
//     }
// };

// int main() {
//     // Animal a;        // Line 1
//     Dog d;              // Line 2
//     Animal* ptr = &d;   // Line 3
//     ptr->speak();       // Line 4
// }

// ------------------------ 5 --------------------
// #include <iostream>
// using namespace std;

// class Base
// {
// public:
//     virtual void print() { cout << "Base\n"; }
// };

// class Derived : public Base
// {
// public:
//     void print() { cout << "Derived\n"; }
// };

// int main()
// {
//
//     Derived d;
// Base b = d;
// b.print();
// }

// ------------------------ 6 --------------------
// #include <iostream>
// using namespace std;
// class Base
// {
// public:
//     virtual void func() = 0;
//      void other() { cout << "Hello"; }
// };

// class Derived : public Base
// {
// public:
//     // void func()
//     // {
//     //     cout << "Hello derived function ";
//     // }
//     void other() { cout << "Hello derived "; }
// };

// int main()
// {
//     Derived d;
//     d.func();
//     d.other();
// }

// ------------------------ 7 --------------------
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

class A {
public:
    void show() { cout << "A"; }
};

class B : public A {
public:
    void show() { cout << "B"; }
};

int main() {
    B b;
    A a = b;
    a.show();
}

// ------------------------ 8 --------------------
// ------------ Subscript Operator Overload -------------

// #include<iostream>
// #include<string>
// #include<cstdlib>
// using namespace std;
// class Number {
// private:
//     int arr[5]; // Array of 5 integers

// public:
//     // Constructor to initialize values
//     Number() {
//         for (int i = 0; i < 5; ++i) arr[i] = i * 10;
//     }

//     // Overload [] operator
//     int& operator[](int index) {
//         if (index < 0 || index >= 5) {
//             cout << "Index out of bounds!" << endl;
//             // Return first element as fallback
//             return arr[0];
//         }
//         return arr[index];
//     }

//     // Display all elements
//     void display() {
//         for (int i = 0; i < 5; ++i)
//             cout << arr[i] << " ";
//         cout << endl;
//     }
// };

// int main() {
//     Number obj;
//     obj.display();

//     obj[3] = 99;        // Overloaded [] lets us modify
//     cout << obj[2] << endl;  // Accessing using []

//     obj.display();
//     obj[10] = 5;        // Out of bounds warning

//     obj.display();
//     return 0;
// }