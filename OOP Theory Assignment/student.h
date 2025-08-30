#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Student
{
private:
    string name, grade;
    int ID, year_of_Birth;
    float cgpa;
    int *marks;
    int Assign_Nmb;

public:
    int min;
    int max = 0;
    int avg;
    int sum = 0;

    Student(string, int, int, float, int);
    Student(Student &obj, string n, int id);
    void setter(string n, int id, int m, int Year, float c);
    void setgrade();
    void display();
    ~Student();

    string getname() { return name; }

    string getGrade() { return grade; }

    int getId() { return ID; }

    // int getMarks() { return marks;}

    int getYear_of_Birth() { return year_of_Birth; }

    float getCgpa() { return cgpa; }

};

void inputStudents(int count, Student student[]);

void Dispaly(int count, Student student[]);


void Topper(int count, Student student[]);


void Sort(int count, Student student[]);

