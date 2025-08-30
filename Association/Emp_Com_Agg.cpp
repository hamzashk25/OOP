// ---------------------Aggregation-----------------------

// it is HAS-A relationShip not deleted other object if any object deleted
// #include <iostream>
// #include <string>
// #include <cstring>
// #include <cstdlib>
// using namespace std;

// class Employee
// {
// private:
//     char *Emp_name;
//     int age;

// public:
//     Employee(const char *name,int age)
//     {
//         cout << "Employee Constructor Called " << endl;
//         Emp_name = new char[strlen(name) + 1];
//         strcpy(Emp_name, name);
//         this->age=age;
//     }

//     void Display()
//     {
//         cout << "Employee Name " << Emp_name << " Age " << age << endl;
//     }

//     ~Employee()
//     {
//         cout << "Employee Destructor Called " << endl;
//         delete[] Emp_name;
//     }
// };

// class Company
// {
// private:
//     char *Comp_name;
//     Employee *emp;

// public:
//     Company(const char *Compname, Employee *emp)
//     {
//         cout << "Company Constructor Called " << endl;
//         Comp_name = new char[strlen(Compname) + 1];
//         strcpy(Comp_name, Compname);
//         this->emp = emp;
//     }

//     void Display()
//     {
//         cout << "Company Name " << Comp_name << endl;
//         // cout << "Employee Name ";
//         emp->Display();
//     }
//     ~Company()
//     {
//         cout << "Company Destructor Called " << endl;
//         delete[] Comp_name;
//     }
// };

// int main()
// {
//     cout << "Here the Employee Hassan Works ON Company SOftware Development " << endl;
//     Employee E1("Hassan",12);

//     {
//         Company C1("Software Development ", &E1);
//         C1.Display();
//         // here company object will be deleted, whereas Employee object is still there
//     }
//     cout << "At this Point Company gets deleted but Employee ";
//     E1.Display();
//     cout << " is Still there " << endl;

//     // E1.Display();
//     return 0;
// }