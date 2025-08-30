#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class student
{
public:
    string name;
    int *ageptr;

    student(string n, int age)
    {
        name = n;
        ageptr = new int;
        *ageptr=age;
    }

    student(student &obj)
    {
        name = obj.name;
        ageptr = new int;
        *ageptr = *obj.ageptr;
    }

    void display()
    {
        cout << "Name of student " << name << endl;
        cout << "Age of student " << *ageptr << endl;
    }

    ~student()
    {
        cout << "Hy I am a Destructor " << endl;
        delete ageptr;
    }
};

int main()
{
    student s1("hamza", 10);
    s1.display();

    student s2(s1);
    s2.name = "awais";
    *(s2.ageptr) = 23;
    s1.display();

    s2.display();

    // ------------------------------Deep Copy----------------------
    // int *p = new int[3];
    // p[0] = 10;
    // p[1] = 15;
    // p[2] = 2000;
    // int *q = new int;
    // q[0] = p[0];
    // q[0]=2000;
    // cout << q[0]<<" ";
    // cout<<p[0];

    return 0;
}