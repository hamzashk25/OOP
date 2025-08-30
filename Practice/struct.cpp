#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct teacher
{
    string name[4];
    int age[4];
    float salary[4];
};

teacher getinfo(teacher n, int size)
{
    cout << "name " << n.name[0] << endl;
    cout << "Age  " << n.age[0] << endl;
    cout << "salary " << n.salary[0] << endl;
}

int main()
{

    teacher t1;
    t1.name[0] = "hamza";
    t1.age[0] = 23;
    t1.salary[0] = 25000;

    int size = 4;
    getinfo(t1, size);
    return 0;
}