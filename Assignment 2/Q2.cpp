#include <iostream>
#include <cstring>
#include <string>
#include <ctime>
using namespace std;

// Forward declarations
class Course;
class Student;
class Faculty;

// Constants for array sizes
const int MAX_COURSES = 50;
const int MAX_STUDENTS = 100;
const int MAX_FACULTY = 50;

// Helper Date class
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date() : day(1), month(1), year(2000) {}
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    void display() const
    {
        cout << day << "/" << month << "/" << year;
    }

    bool isAfter(const Date &other) const
    {
        if (year > other.year)
            return true;
        if (year == other.year && month > other.month)
            return true;
        if (year == other.year && month == other.month && day > other.day)
            return true;
        return false;
    }
};

// Global arrays (since we're not using vectors)
Course *allCourses[MAX_COURSES];
Student *allStudents[MAX_STUDENTS];
Faculty *allFaculty[MAX_FACULTY];

int courseCount = 0;
int studentCount = 0;
int facultyCount = 0;

class Course
{
private:
    string code;
    string name;
    Date startDate;
    Student *enrolledStudents[MAX_STUDENTS];
    int studentCount;
    int status;
    Faculty *instructor;

public:
    Course(string c, string n, Date sd);

    void setInstructor(Faculty *f);
    bool enrollStudent(Student *s);
    void displayInfo() const;

    string getCode() const { return code; }
    string getName() const { return name; }
};

class Student
{
private:
    string id;
    string name;
    Date joinDate;
    Course *enrolledCourses[MAX_COURSES];
    int courseCount;
    int status;

public:
    Student(string i, string n, Date jd) : id(i), name(n), joinDate(jd), courseCount(0), status(1)
    {
        allStudents[studentCount++] = this;
    }

    bool enrollCourse(Course *c)
    {
        if (courseCount < MAX_COURSES)
        {
            enrolledCourses[courseCount++] = c;
            return c->enrollStudent(this);
        }
        return false;
    }

    void displayInfo() const
    {
        cout << "Student ID: " << id << "\n";
        cout << "Name: " << name << "\n";
        cout << "Join Date: ";
        joinDate.display();
        cout << "\n";
        cout << "Status: " << (status ? "Active" : "Inactive") << "\n";
        cout << "Enrolled Courses (" << courseCount << "):\n";
        for (int i = 0; i < courseCount; i++)
        {
            cout << "  - " << enrolledCourses[i]->getCode() << ": " << enrolledCourses[i]->getName() << "\n";
        }
    }

    string getId() const { return id; }
    string getName() const { return name; }
};

class Faculty
{
private:
    string id;
    string name;
    Date joinDate;
    Course *teachingCourses[MAX_COURSES];
    int courseCount;
    int status;

public:
    Faculty(string i, string n, Date jd) : id(i), name(n), joinDate(jd), courseCount(0), status(1)
    {
        allFaculty[facultyCount++] = this;
    }

    bool assignCourse(Course *c)
    {
        if (courseCount < MAX_COURSES)
        {
            teachingCourses[courseCount++] = c;
            c->setInstructor(this);
            return true;
        }
        return false;
    }

    void displayInfo() const
    {
        cout << "Faculty ID: " << id << "\n";
        cout << "Name: " << name << "\n";
        cout << "Join Date: ";
        joinDate.display();
        cout << "\n";
        cout << "Status: " << (status ? "Active" : "Inactive") << "\n";
        cout << "Teaching Courses (" << courseCount << "):\n";
        for (int i = 0; i < courseCount; i++)
        {
            cout << "  - " << teachingCourses[i]->getCode() << ": " << teachingCourses[i]->getName() << "\n";
        }
    }

    string getId() const { return id; }
    string getName() const { return name; }
};

class Admin
{
private:
    string id;
    string name;
    Date joinDate;

public:
    Admin(string i, string n, Date jd) : id(i), name(n), joinDate(jd) {}

    Student *createStudent(string id, string name, Date joinDate)
    {
        return new Student(id, name, joinDate);
    }

    Faculty *createFaculty(string id, string name, Date joinDate)
    {
        return new Faculty(id, name, joinDate);
    }

    Course *createCourse(string code, string name, Date startDate)
    {
        return new Course(code, name, startDate);
    }

    bool registerCourse(Student *s, Course *c)
    {
        return s->enrollCourse(c);
    }

    bool assignFaculty(Faculty *f, Course *c)
    {
        return f->assignCourse(c);
    }

    void displayStudentInfo(Student *s)
    {
        s->displayInfo();
    }

    void displayFacultyInfo(Faculty *f)
    {
        f->displayInfo();
    }

    void displayCourseInfo(Course *c)
    {
        c->displayInfo();
    }
};

// Now implement Course methods after Faculty and Student are fully defined
Course::Course(string c, string n, Date sd) : code(c), name(n), startDate(sd), studentCount(0), status(1), instructor(nullptr)
{
    allCourses[courseCount++] = this;
}

void Course::setInstructor(Faculty *f)
{
    instructor = f;
}

bool Course::enrollStudent(Student *s)
{
    if (studentCount < MAX_STUDENTS)
    {
        enrolledStudents[studentCount++] = s;
        return true;
    }
    return false;
}

void Course::displayInfo() const
{
    cout << "Course Code: " << code << "\n";
    cout << "Course Name: " << name << "\n";
    cout << "Start Date: ";
    startDate.display();
    cout << "\n";
    cout << "Status: " << (status ? "Active" : "Inactive") << "\n";
    if (instructor)
    {
        cout << "Instructor: " << instructor->getName() << "\n";
    }
    cout << "Enrolled Students (" << studentCount << "):\n";
    for (int i = 0; i < studentCount; i++)
    {
        cout << "  - " << enrolledStudents[i]->getName() << "\n";
    }
}

// Helper functions
void displayMainMenu()
{
    cout << "\nStudent Course Registration Portal\n";
    cout << "1. Admin Operations\n";
    cout << "2. View Information\n";
    cout << "3. Exit\n";
    cout << "Enter choice: ";
}

void displayAdminMenu()
{
    cout << "\nAdmin Operations\n";
    cout << "1. Create Student\n";
    cout << "2. Create Faculty\n";
    cout << "3. Create Course\n";
    cout << "4. Register Student for Course\n";
    cout << "5. Assign Faculty to Course\n";
    cout << "6. Back to Main Menu\n";
    cout << "Enter choice: ";
}

void displayViewMenu()
{
    cout << "\nView Information\n";
    cout << "1. View All Students\n";
    cout << "2. View All Faculty\n";
    cout << "3. View All Courses\n";
    cout << "4. View Specific Student\n";
    cout << "5. View Specific Faculty\n";
    cout << "6. View Specific Course\n";
    cout << "7. Back to Main Menu\n";
    cout << "Enter choice: ";
}

int main()
{
    Admin admin("admin001", "System Admin", Date(1, 1, 2023));
    int choice, subChoice;

    // Sample data
    Student *s1 = admin.createStudent("s001", "John Doe", Date(15, 1, 2023));
    Student *s2 = admin.createStudent("s002", "Jane Smith", Date(20, 1, 2023));
    Faculty *f1 = admin.createFaculty("f001", "Dr. Williams", Date(10, 1, 2023));
    Faculty *f2 = admin.createFaculty("f002", "Prof. Johnson", Date(12, 1, 2023));
    Course *c1 = admin.createCourse("CS101", "Introduction to Programming", Date(1, 2, 2023));
    Course *c2 = admin.createCourse("CS201", "Data Structures", Date(1, 2, 2023));
    admin.registerCourse(s1, c1);
    admin.registerCourse(s2, c1);
    admin.registerCourse(s1, c2);
    admin.assignFaculty(f1, c1);
    admin.assignFaculty(f2, c2);

    do
    {
        displayMainMenu();
        cin >> choice;

        switch (choice)
        {
        case 1: // Admin Operations
            do
            {
                displayAdminMenu();
                cin >> subChoice;

                switch (subChoice)
                {
                case 1:
                {
                    string id, name;
                    int d, m, y;
                    cout << "Enter Student ID: ";
                    cin >> id;
                    cout << "Enter Student Name: ";
                    cin.ignore();
                    getline(cin, name);
                    cout << "Enter Join Date (dd mm yyyy): ";
                    cin >> d >> m >> y;
                    admin.createStudent(id, name, Date(d, m, y));
                    cout << "Student created successfully.\n";
                    break;
                }
                case 2:
                {
                    string id, name;
                    int d, m, y;
                    cout << "Enter Faculty ID: ";
                    cin >> id;
                    cout << "Enter Faculty Name: ";
                    cin.ignore();
                    getline(cin, name);
                    cout << "Enter Join Date (dd mm yyyy): ";
                    cin >> d >> m >> y;
                    admin.createFaculty(id, name, Date(d, m, y));
                    cout << "Faculty created successfully.\n";
                    break;
                }
                case 3:
                {
                    string code, name;
                    int d, m, y;
                    cout << "Enter Course Code: ";
                    cin >> code;
                    cout << "Enter Course Name: ";
                    cin.ignore();
                    getline(cin, name);
                    cout << "Enter Start Date (dd mm yyyy): ";
                    cin >> d >> m >> y;
                    admin.createCourse(code, name, Date(d, m, y));
                    cout << "Course created successfully.\n";
                    break;
                }
                case 4:
                {
                    string studentId, courseCode;
                    cout << "Enter Student ID: ";
                    cin >> studentId;
                    cout << "Enter Course Code: ";
                    cin >> courseCode;

                    Student *s = nullptr;
                    Course *c = nullptr;

                    for (int i = 0; i < studentCount; i++)
                    {
                        if (allStudents[i]->getId() == studentId)
                        {
                            s = allStudents[i];
                            break;
                        }
                    }

                    for (int i = 0; i < courseCount; i++)
                    {
                        if (allCourses[i]->getCode() == courseCode)
                        {
                            c = allCourses[i];
                            break;
                        }
                    }

                    if (s && c)
                    {
                        if (admin.registerCourse(s, c))
                        {
                            cout << "Registration successful.\n";
                        }
                        else
                        {
                            cout << "Registration failed (course may be full).\n";
                        }
                    }
                    else
                    {
                        cout << "Student or Course not found.\n";
                    }
                    break;
                }
                case 5:
                {
                    string facultyId, courseCode;
                    cout << "Enter Faculty ID: ";
                    cin >> facultyId;
                    cout << "Enter Course Code: ";
                    cin >> courseCode;

                    Faculty *f = nullptr;
                    Course *c = nullptr;

                    for (int i = 0; i < facultyCount; i++)
                    {
                        if (allFaculty[i]->getId() == facultyId)
                        {
                            f = allFaculty[i];
                            break;
                        }
                    }

                    for (int i = 0; i < courseCount; i++)
                    {
                        if (allCourses[i]->getCode() == courseCode)
                        {
                            c = allCourses[i];
                            break;
                        }
                    }

                    if (f && c)
                    {
                        if (admin.assignFaculty(f, c))
                        {
                            cout << "Assignment successful.\n";
                        }
                        else
                        {
                            cout << "Assignment failed (faculty may have too many courses).\n";
                        }
                    }
                    else
                    {
                        cout << "Faculty or Course not found.\n";
                    }
                    break;
                }
                }
            } while (subChoice != 6);
            break;

        case 2: // View Information
            do
            {
                displayViewMenu();
                cin >> subChoice;

                switch (subChoice)
                {
                case 1:
                    cout << "\nAll Students (" << studentCount << "):\n";
                    for (int i = 0; i < studentCount; i++)
                    {
                        allStudents[i]->displayInfo();
                        cout << "-----------------\n";
                    }
                    break;
                case 2:
                    cout << "\nAll Faculty (" << facultyCount << "):\n";
                    for (int i = 0; i < facultyCount; i++)
                    {
                        allFaculty[i]->displayInfo();
                        cout << "-----------------\n";
                    }
                    break;
                case 3:
                    cout << "\nAll Courses (" << courseCount << "):\n";
                    for (int i = 0; i < courseCount; i++)
                    {
                        allCourses[i]->displayInfo();
                        cout << "-----------------\n";
                    }
                    break;
                case 4:
                {
                    string studentId;
                    cout << "Enter Student ID: ";
                    cin >> studentId;

                    bool found = false;
                    for (int i = 0; i < studentCount; i++)
                    {
                        if (allStudents[i]->getId() == studentId)
                        {
                            allStudents[i]->displayInfo();
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                        cout << "Student not found.\n";
                    break;
                }
                case 5:
                {
                    string facultyId;
                    cout << "Enter Faculty ID: ";
                    cin >> facultyId;

                    bool found = false;
                    for (int i = 0; i < facultyCount; i++)
                    {
                        if (allFaculty[i]->getId() == facultyId)
                        {
                            allFaculty[i]->displayInfo();
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                        cout << "Faculty not found.\n";
                    break;
                }
                case 6:
                {
                    string courseCode;
                    cout << "Enter Course Code: ";
                    cin >> courseCode;

                    bool found = false;
                    for (int i = 0; i < courseCount; i++)
                    {
                        if (allCourses[i]->getCode() == courseCode)
                        {
                            allCourses[i]->displayInfo();
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                        cout << "Course not found.\n";
                    break;
                }
                }
            } while (subChoice != 7);
            break;

        case 3:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    // Clean up memory
    for (int i = 0; i < studentCount; i++)
        delete allStudents[i];
    for (int i = 0; i < facultyCount; i++)
        delete allFaculty[i];
    for (int i = 0; i < courseCount; i++)
        delete allCourses[i];

    return 0;
}