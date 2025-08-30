#include"student.h"

Student::Student(string n = "hamza", int id = 78, int Year = 2006, float c = 3.2, int assign = 3)
{
    name = n;
    ID = id;
    year_of_Birth = Year;
    cgpa = c;
    Assign_Nmb = assign;
    marks = new int[assign];

    for (int i = 0; i < assign; i++)
    {
        cout << "Assignment " << i + 1 << " marks : ";
        cin >> marks[i];
        sum += marks[i];
    }

    for (int i = 0; i < assign; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
        }
    }

    min = marks[0];
    for (int i = 0; i < assign; i++)
    {
        if (marks[i] < min)
        {
            min = marks[i];
        }
    }

    avg = sum / assign;

    setgrade();
}

Student ::Student(Student &obj, string n, int id)
{

    name = n;
    ID = id;
    year_of_Birth = obj.year_of_Birth;
    cgpa = obj.cgpa;
    grade = obj.grade;
    Assign_Nmb = obj.Assign_Nmb;

    marks = new int[Assign_Nmb];
    avg = obj.avg;
    max = obj.max;
    min = obj.min;
    avg = obj.avg;
}

void Student::setter(string n, int id, int m, int Year, float c)
{
    name = n;
    ID = id;
    year_of_Birth = Year;
    cgpa = c;
}

void Student::setgrade()
{

    if (avg >= 90)
    {
        grade = "A+";
        cgpa = 4.0;
    }
    else if (avg >= 80)
    {
        grade = "A";
        cgpa = 3.8;
    }
    else if (avg >= 70)
    {
        grade = "A-";
        cgpa = 3.6;
    }
    else if (avg >= 60)
    {
        grade = "B+";
        cgpa = 3.2;
    }
    else if (avg >= 50)
    {
        grade = "B";
        cgpa = 3.0;
    }
    else if (avg >= 40)
    {
        grade = "B-";
        cgpa = 2.8;
    }
    else
    {
        grade = "F";
        cgpa = 2.0;
    };
}

void Student::display()
{
    cout << "Name " << name << endl;
    cout << "Year Of Birth " << year_of_Birth << endl;
    cout << "Student ID " << ID << endl;
    cout << "Maximum Marks " << max << endl;
    cout << "Minimum Marks " << min << endl;
    cout << "Average Marks " << avg << endl;
    cout << "Grade " << grade << endl;
    cout << "CGPA " << cgpa << endl;
    cout << endl;
}

Student::~Student()
{
    cout << "Destructor Invoked " << name << endl;
    delete[] marks;
}

void inputStudents(int count, Student student[])
{
    for (int i = 0; i < count; i++)
    {
        string name;
        int id, year, assign;
        float cgpa;

        cout << "Enter details for Student " << i + 1 << endl;
        cout << "Name: ";
        cin >> name;
        cout << "ID: ";
        cin >> id;
        cout << "Year of Birth: ";
        cin >> year;
        cout << "CGPA: ";
        cin >> cgpa;
        cout << "Number of Assignments: ";
        cin >> assign;

        student[i] = Student(name, id, year, cgpa, assign);
    }
}
void Dispaly(int count, Student student[])
{
    for (int i = 0; i < count; i++)
    {
        cout << "Student " << i + 1 << " Information " << endl;
        student[i].display();
    }
}

void Topper(int count, Student student[])
{
    int topper = student[0].avg;
    int maxIndex = 0;
    for (int i = 0; i < count; i++)
    {
        if (student[i].avg > student[maxIndex].avg)
        {
            maxIndex = i;
        }
    }
    cout << "Topper of Student is " << endl;
    student[maxIndex].display();
}

void Sort(int count, Student student[])
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - 1; j++)
        {
            if (student[j].getId() > student[j + 1].getId())
            {
                Student temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }
}
