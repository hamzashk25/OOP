#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Employee
{
private:
    int id;
    static int count;

public:
    void setID() 
    {
        cout << "Enter a ID ";
        cin >> id;
    }

    void getID() const
    {
        cout << "Id of employee is " << id << " and count is " << count << endl;
    }

    static void setcount()
    {
        count++;
    }
};

int Employee::count;


int main()
{
    Employee E1;
    E1.setID();
    E1.setcount();
    E1.getID();

    Employee E2;
    E2.setID();
    E2.setcount();
    E2.getID();

    Employee E3;
    E3.setID();
    E3.setcount();
    E3.getID();
    return 0;
}