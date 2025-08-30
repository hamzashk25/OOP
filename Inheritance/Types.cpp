// -------------------  Single Inheritance ---------
// #include <iostream>
// using namespace std;

// class Person {
// public:
//     string name;
//     void display() {
//         cout << "Name: " << name << endl;
//     }
// };

// class Student : public Person {
// public:
//     int rollNo;
//     void show() {
//         cout << "Roll No: " << rollNo << endl;
//     }
// };

// int main() {
//     Student s;
//     s.name = "Ali";
//     s.rollNo = 23;

//     s.display();  // From Person
//     s.show();     // From Student

//     return 0;
// }

// ---------------------  Multiple Inheritance -----------
// #include<iostream>
// #include<string>
// #include<cstdlib>
// using namespace std;

// class Teacher {
// public:
//     void teach() {
//         cout << "Teaching..." << endl;
//     }

//     static void Display()
//     {
//         cout<<"Teacher Display "<<endl;
//     }
// };

// class Researcher {
// public:
//     void research() {
//         cout << "Researching..." << endl;
//     }

//     void Display()
//     {
//         cout<<"Researcher Display "<<endl;
//     }
// };

// class Professor : public Teacher, public Researcher {
//     // Combines functionality of both
//     public:
//     // void Display()
//     // {
//     //     cout<<"Professor Display "<<endl;
//     // }
// };

// int main() {
//     Professor prof;
//     prof.teach();     // From Teacher
//     prof.research();  // From Researcher
//     prof.Teacher::Display();

//     return 0;
// }

// --------------- Multilevel Inheritance ---------------
// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class Animal
// {
// public:
//     void eat()
//     {
//         cout << "Eating..." << endl;
//     }

//     virtual void Display()
//     {
//         cout << "Animal Display " << endl;
//     }
// };

// class Mammal : public Animal
// {
// public:
//     void walk()
//     {
//         cout << "Walking..." << endl;
//     }

//     void Display()
//     {
//         cout << "Mamal Display " << endl;
//     }
// };

// class Dog : public Mammal
// {
// public:
//     void bark()
//     {
//         cout << "Barking..." << endl;
//     }

//     void Display()
//     {
//         cout << "Dog Display " << endl;
//     }
// };

// int main()
// {
//     Dog d;
//     d.eat();  // From Animal
//     d.walk(); // From Mammal
//     d.bark(); // From Dog

//     d.Display();
//     return 0;
// }

//--------------------- Hierarchical Inheritance ---------
// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class Vehicle
// {
// public:
//     void fuel()
//     {
//         cout << "Fueling..." << endl;
//     }
//     void Display()
//     {
//         cout << "Vehicle Display " << endl;
//     }
// };

// class Car : public Vehicle
// {
//     // Inherits fuel()
//     public:
//     void Display()
//     {
//         cout << "Car Display " << endl;
//     }
// };

// class Bike : public Vehicle
// {
//     // Inherits fuel()
// };

// int main()
// {
//     Car c;
//     Bike b;

//     c.fuel(); // From Vehicle
//     b.fuel(); // From Vehicle
//     c.Display();
//     return 0;
// }

// -------------  Hybrid Inheritance ------------------
// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     void show()
//     {
//         cout << "A's show()" << endl;
//     }
// };

// class B : public A
// {
// public:
//     // void show()
//     // {
//     //     cout << "B's show()" << endl;
//     // }
// };
// class C : public A
// {
// public:
//     // void show()
//     // {
//     //     cout << "C's show()" << endl;
//     // }
// };

// class D : public B, public C
// {
// public:
//     //     void show() {
//     //     cout << "D's show()" << endl;
//     // }
// };

// int main()
// {
//     D obj;
//     A *ptr;
//     // ptr=&obj;      // ❌ error because two copies of D class
//     // obj.show(); // ❌ Ambiguous: show() is inherited twice
//     // obj.B::show(); // ✅ Resolving ambiguity
//     // obj.C::show();
// }

// ------------------- Solution ------------
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class A
{
public:
    A()
    {
        cout << "A constructor " << endl;
    }
    void show()
    {
        cout << "A's show()" << endl;
    }
};

class B : virtual public A
{
public:
    B()
    {
        cout << "B Constructor " << endl;
    }
};
class C : virtual public A
{
public:
    C()
    {
        cout << "C Constructor " << endl;
    }
};

class D : public B, public C
{
    public:
    D()
    {
        cout << "D Constructor " << endl;
    }
        ~D()
    {
        cout << "D destructor\n";
    }
};

int main()
{
    D obj;
    obj.show(); // ✅ Now only one show() from A is available

    D::A();
}

// ---------------------
// #include <iostream>
// using namespace std;
// class parent
// {
// public:
//     virtual void speak()
//     {
//         cout << "Parent is speaking" << endl;
//     }
// };

// class child : public parent
// {
// public:
//     void speak()
//     {
//         cout << "Child is speaking" << endl;
//     }
//     static void crying()
//     {
//         cout << "Child is crying" << endl;
//     }
// };
// int main()
// {
//     parent *p = new child();
//     child c;

//     // agr hum virtuaal keyword use na kary or child my speak ka function bhi
//     // na bany to hum phir parent pointer jo ky child ko point kr rha ha to wo
//     // apny speak ko excess kary ga because inheritance ho rhi ha return 0;
// }

// --------------------
// #include<iostream>
// #include<string>
// #include<cstdlib>
// using namespace std;

// class A {
// public:
//     virtual void print() {
//         cout << "A\n";
//     }
// };

// class B : public A {
// public:
//     void print() {
//         cout << "B\n";
//     }
// };

// int main() {
//     A* ptr = new B;
//     ptr->print();
//     delete ptr;
// }
