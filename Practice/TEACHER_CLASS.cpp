#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class teacher
{
private:
    string password;
    string ID; // data hiding it makes for personal data
public:
    teacher()
    {
        cout << "Hy,I am Hamza ";
        Dept = "CS";
    }

    string setpassword(string pass)
    {
        password = pass;
        return password;
    }

    teacher(string n, string d, string c, double s)
    {
        name = n;
        Dept = d;
        course = c;
        salary = s;
    }

    void getinfo()
    {
        cout << name << endl;
        cout << Dept<<endl;
        cout << course << endl;
        cout << salary << endl;
    }

    string name;
    string Dept;
    string course;
    float salary;
};

int main()
{
    teacher t1("hamza", "cs", "C++", 25000);

    t1.getinfo();
    // t1.name = "hamza";
    // t1.salary = 25000;

    // cout << "Enter a teacher password ";
    // string password;
    // cin >> password;

    // cout << t1.setpassword(password);

    return 0;
}