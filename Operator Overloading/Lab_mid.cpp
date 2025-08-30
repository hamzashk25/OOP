#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class University
{

private:
    string name;
    int ISBN;
    string *title;
    string autor;
    float price;
    static int id;

public:
    University(string n = "Hamza", string t = "Calculus", string a = "Thomas", float p = 1200, int i = 123432)
    {
        title=new string[5];
        name = n;
        *title = t[0];
        autor = a;
        ISBN = i;
        price = p;
        id++;
    }

    void Print()
    {
        cout << name << endl;
        cout << id << endl;
        cout << title << endl;
        cout << autor << endl;
        cout << title << endl;
        cout << ISBN << endl;
        cout << price << endl;
    }

    University &operator=(University &u)
    {
        name = u.name;
        id = u.id;
        title = u.title;
        autor = u.autor;
        ISBN = u.ISBN;
        price = u.price;
    }

    friend ostream &operator<<(ostream &out, University u)
    {
        out << u.name << endl;
        out << u.id << endl;
        out << u.title << endl;
        out << u.autor << endl;
        out << u.title << endl;
        out << u.ISBN << endl;
        out << u.price << endl;
    }
};

int University::id = 0;
int main()
{
    University U1("Awais", "CS", "qwerty", 25000, 12345);
    cout << U1;
    University U2("hassan", "CS", "qwerty", 25000, 12345);
    cout<<U2;

    University U3;
    U3=U1;
    cout<<U3;

    return 0;
}