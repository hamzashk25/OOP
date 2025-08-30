// #include <iostream>
// #include <string>
// #include <fstream>
// #include <cstdlib>
// using namespace std;
// class Person
// {
// protected:
//     string name;
//     int age;
//     int ID;

// public:
//     Person(string name, int age, int ID)
//     {
//         this->name = name;
//         this->age = age;
//         this->ID = ID;
//     }

//     friend ostream &operator<<(ostream &out, const Person &p)
//     {
//         out << "Name " << p.name << "ID " << p.ID << "Age " << p.age;
//         return out;
//     }
// };

// class Teacher : public Person
// {
// private:
//     string subject;

// public:
//     Teacher(string name, int age, int id, string subject)
//         : Person(name, age, id), subject(subject) {}

//     friend ostream &operator<<(ostream &out, const Teacher &t)
//     {
//         out << "Teacher ";
//         out << static_cast<Person>(t);
//         out << "Subject " << t.subject;
//         return out;
//     }
// };

// class Student : public Person
// {

// private:
//     string Department;

// public:
//     Student(string name, int age, int id, string Department)
//         : Person(name, age, id), Department(Department) {}

//     friend ostream &operator<<(ostream &out, const Student &s)
//     {
//         out << "Student ";
//         out << static_cast<Person>(s);
//         out << "Department " << s.Department;
//         return out;
//     }
// };

// class Book
// {
// private:
//     string name;
//     string title;

// public:
//     Book()
//     {
//         cout<<"Book Default Constructor "<<endl;
//     }
//     Book(string name, string title)
//     {
//         this->name = name;
//         this->title = title;
//         cout << "Parametrized constructor Called of Book " << endl;
//     }

//     void Display()
//     {
//         cout << "Name " << name << endl;
//         cout << "Title " << title << endl;
//     }

//     ~Book()
//     {
//         cout << "Destructor called of Book Class " << endl;
//     }
// };

// class Library
// {
// private:
//     Book **book;
//     int count;
//     int size;

// public:
//     Library(int s)
//     {
//         size = s;
//         book = new Book *[size];
//         count = 0;

//         cout << "Parametrized constructor Called of library " << endl;
//     }

//     void AddBooks(Book *b)
//     {
//         book[count++] = b;
//     }

//     void Display()
//     {
//         for (int i = 0; i < count; i++)
//         {
//             book[i]->Display();
//         }
//     }

//     ~Library()
//     {
//         cout << "Destructor Called of Library Class " << endl;
//         delete[] book;
//     }
// };
// int main()
// {
//     // Student s("hamza", 18, 1001, "CS");
//     // Teacher t("Sir Aizaz", 45, 1002, "CS");

//     // cout << s << endl;
//     // cout << t << endl;

//     Book b1("Calculus", "Thomas");
//     Book b2("oop", "Tonny gaddies");

//     Library l1(12);
//     l1.AddBooks(&b1);
//     l1.AddBooks(&b2);

//     cout << "Books in Library " << endl;
//     l1.Display();
//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// class Course; // Forward declaration

// class Student {
// private:
//     string name;
//     int age;
//     Course* courses[10]; // Student can enroll in up to 10 courses
//     int courseCount;

// public:
//     Student(string n = "", int a = 0) {
//         name = n;
//         age = a;
//         courseCount = 0;
//         cout << "Student Constructor: " << name << endl;
//     }

//     void enrollInCourse(Course* c); // Defined below

//     void printCourses();

//     string getName() const { return name; }

//     ~Student() {
//         cout << "Destructor for Student: " << name << endl;
//     }
// };

// class Course {
// private:
//     string name;
//     Student* students[10]; // Course can have up to 10 students
//     int studentCount;

// public:
//     Course(string n = "") {
//         name = n;
//         studentCount = 0;
//         cout << "Course Constructor: " << name << endl;
//     }

//     void registerStudent(Student* s) {
//         if (studentCount < 10) {
//             students[studentCount++] = s;
//         }
//     }

//     void printName() const {
//         cout << name << " ";
//     }

//     void printStudents() const {
//         cout << "Course: " << name << " has students: ";
//         for (int i = 0; i < studentCount; i++) {
//             cout << students[i]->getName() << " ";
//         }
//         cout << endl;
//     }

//     ~Course() {
//         cout << "Destructor for Course: " << name << endl;
//     }
// };

// // Now define the student method that links both ways
// void Student::enrollInCourse(Course* c) {
//     if (courseCount < 10) {
//         courses[courseCount++] = c;
//         c->registerStudent(this); // Link both ways
//     }
// }

// void Student::printCourses() {
//     cout << name << " is enrolled in: ";
//     for (int i = 0; i < courseCount; i++) {
//         courses[i]->printName();
//     }
//     cout << endl;
// }

// int main() {
//     // Create Students
//     Student* s1 = new Student("Hamza", 19);
//     Student* s2 = new Student("Ali", 20);

//     // Create Courses
//     Course* c1 = new Course("OOP");
//     Course* c2 = new Course("DSA");

//     // Enroll Students in Courses
//     s1->enrollInCourse(c1);
//     s1->enrollInCourse(c2);
//     s2->enrollInCourse(c1);

//     // Print Course Enrollments
//     s1->printCourses();
//     s2->printCourses();

//     c1->printStudents();
//     c2->printStudents();

//     // Cleanup
//     delete s1;
//     delete s2;
//     delete c1;
//     delete c2;

//     return 0;
// }

// --------------- constructor and destructor in aggregation --------------
#include <iostream>
using namespace std;

class Engine {
public:
    Engine() { cout << "Engine constructor called\n"; }
    ~Engine() { cout << "Engine destructor called\n"; }
    void start() { cout << "Engine started!\n"; }
};

class Car {
    Engine* engine;  // Aggregation - Car uses an Engine but doesn't own it
public:
    Car(Engine* eng) : engine(eng) { 
        cout << "Car constructor called\n"; 
    }
    ~Car() { 
        cout << "Car destructor called\n"; 
        // Note: We don't delete engine here - that's aggregation!
    }
    void drive() {
        engine->start();
        cout << "Car is driving\n";
    }
};

int main() {
    cout << "Creating Engine:\n";
    Engine* myEngine = new Engine();  // Engine created independently
    
    {
        cout << "\nCreating Car:\n";
        Car myCar(myEngine);  // Car uses existing engine
        myCar.drive();
        
        cout << "\nCar going out of scope:\n";
    }  // Car destroyed here, but engine remains
    
    cout << "\nEngine still exists here:\n";
    myEngine->start();
    
    cout << "\nFinally deleting Engine:\n";
    delete myEngine;  // Engine destroyed manually
    
    return 0;
}