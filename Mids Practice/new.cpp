// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// int main()
// {
//     int month, days, total_days;
//     int Days_per_Month[12] = {31, 29, 31, 30,31,30,31,31,30,31,30,31};
//     cout << "\nEnter month (1 to 12): "; // get date
//     cin >> month;
//     cout << "Enter day (1 to 31): ";
//     cin >> days;

//     total_days = days;
//     for (int i = 0; i < month - 1; i++)
//     {
//         total_days += Days_per_Month[i];
//     }

//     cout << "Total days from start of year is: " << total_days;
//     return 0;
// }

// ----------------------------1-----------------------
// #include <iostream>
// #include <iomanip> // Required for setprecision
// using namespace std;

// int main()
// {
//     double value = 123.456789;

//     cout << "Without fixed: " << setprecision(4) << value << endl;       // 123
//     cout << "With fixed: " << fixed << setprecision(4) << value << endl; // 123.457

//     return 0;
// }

// ------------------------------2----------
// #include <iostream>
// #include <iomanip> // Required for setw
// using namespace std;

// int main()
// {
//     cout << setw(10) << "Hello" << setw(10) << "World" << endl; // Spaces added before "Hello"
//     cout << setw(10) << 123 << endl;                            // Spaces added before 123
//     cout << setw(10) << 4567 << endl;                           // Spaces added before 4567

//     return 0;
// }

// ----------------------------3----------------
// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// void Display(int arr[][3], int rows)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     const int rows = 3, col = 3;
//     int mat[rows][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     Display(mat, rows);

//     return 0;
// }

// --------------------4-----------------------
// #include <iostream>
// using namespace std;
// class Stack
// {
// private:
//     enum
//     {
//         MAX = 10
//     }; //(non-standard syntax)
//     int st[MAX]; // stack: array of integers
//     int top;     // number of top of stack
// public:
//     Stack() // constructor
//     {
//         top = 0;
//     }
//     void push(int var) // put number on stack
//     {
//         st[++top] = var;
//     }
//     int pop() // take number off stack
//     {

//         return st[top--];
//     }
// };

// int main()
// {
//     Stack s1;
//     s1.push(11);
//     s1.push(22);
//     cout << "1: " << s1.pop() << endl; // 22
//     cout << "2: " << s1.pop() << endl; // 11
//     s1.push(33);
//     s1.push(44);
//     s1.push(55);
//     s1.push(66);
//     cout << "3: " << s1.pop() << endl; // 66
//     cout << "4: " << s1.pop() << endl; // 55
//     cout << "5: " << s1.pop() << endl; // 44
//     cout << "6: " << s1.pop() << endl; // 33

//     return 0;
// }

// ---------------------- 5-----------
// objects using English measurements
#include <iostream>
using namespace std;
class Distance // English Distance class
{
private:
    int feet;
    float inches;

public:

Distance ()
{
    cout<<"Constructor ";
}
    void getdist() // get length from user
    {
        cout << "\n Enter feet : ";
        cin >> feet;
        cout << " Enter inches : ";
        cin >> inches;
    }
    void showdist() const // display distance
    {
        cout << feet << " " << inches;
    }
};

int main()
{
    Distance dist[100]; // array of distances
    int n = 0;          // count the entries
    char ans;           // user response (‘y’ or ‘n’)
    cout << endl;
    do
    { // get distances from user
        cout << "Enter distance number " << n + 1;
        dist[n++].getdist(); // store distance in array
        cout << "Enter another(y / n) ?: ";
        cin >> ans;
    } while (ans != 'n'); // quit if user types ‘n’

    for (int j = 0; j < n; j++) // display all distances
    {
        cout << "\nDistance number " << j + 1 << " is ";
        dist[j].showdist();
    }
    cout << endl;
    return 0;
}

// --------------------- 5 -------------------
// #include <iostream>
// using namespace std;

// class Student
// {
//     string name;
//     int age;

// public:

// Student()
// {
//     name="hamza";
//     age=12;
// }
//     Student(string n, int a)
//     { // Parameterized constructor
//         name = n;
//         age = a;
//     }
//     void display()
//     {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main()
// {
//     Student students[3] = {Student(), Student("Hassan", 19), Student("Bilal", 21)};   // Anomynus Object created for run a constructor

//     for (int i = 0; i < 3; i++)
//     {
//         students[i].display();
//     }
//     return 0;
// }

// ---------------------- 6 -------------------
// #include <iostream>
// using namespace std;
// int main()
// {
//     const int MAX = 80; // max characters in string
//     char str[MAX];      // string variable str
//     cout << "\nEnter a string: ";
//     cin.get(str, MAX,'f'); // put string in str //f is used to stop the string
//     cout << "You entered: " << str << endl;
//     return 0;
// }

// -----------------------7--------------------------

// strcopy1.cpp
// copies a string using a for loop
// #include <iostream>
// #include <cstring> //for strlen()
// using namespace std;
// int main()
// { // initialized string
//     char str1[] = "Oh, Captain, my Captain ! "
//                   "our fearful trip is done";
//     const int MAX = 80; // size of str2 buffer
//     char str2[MAX];

//     // int j;                             // empty string
//     // for (j = 0; j < strlen(str1); j++) // copy strlen characters
//     //     str2[j] = str1[j];             //   from str1 to str2
//     // str2[j] = '\0';                    // insert NULL at end

//     //------Easy Way to copy string
//     strcpy(str2,str1);
//     cout << str2 << endl;              // display str2
//     return 0;
// }

// -------------------8----------------------

// #include <iostream>
// using namespace std;

// class Example {
//     int value;

// public:
//     Example(int v = 0) : value(v) {}

//     // Overloaded assignment operator
//     Example& operator=(const Example& obj) {
//         cout << "Calling object value (before assignment): " << this->value << endl;
//         cout << "Passed object value: " << obj.value << endl;

//         this->value = obj.value;  // Assign value

//         cout << "Calling object value (after assignment): " << this->value << endl;

//         return *this;
//     }

//     void display() const {
//         cout << "Value: " << value << endl;
//     }
// };

// int main() {
//     Example a(10);
//     Example b(20);

//     cout << "Before Assignment:" << endl;
//     a.display();
//     b.display();

//     b = a;  // `b` calls the operator; `a` is passed as argument

//     cout << "\nAfter Assignment:" << endl;
//     a.display();
//     b.display();

//     return 0;
// }

// ---------------------------- 9 -----------------------------
// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
//     string name;
//     int age;

// public:
//     // Constructor
//     Student(string n = "Unknown", int a = 0) : name(n), age(a) {}

//     // Overloaded assignment operator
//     Student& operator=(const Student& other) {
//         if (this != &other) {  // Self-assignment check
//             name = other.name;
//             age = other.age;
//         }
//         return *this;  // Return reference to current object
//     }

//     // Display function
//     void display() const {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     Student s1("Ali", 20);
//     Student s2("Sara", 22);

//     cout << "Before Assignment:" << endl;
//     s1.display();
//     s2.display();

//     s2 = s1;  // Calls overloaded `=` operator

//     cout << "\nAfter Assignment:" << endl;
//     s1.display();
//     s2.display();

//     return 0;
// }

// -------------------------- 10 --------------------

// #include <iostream>
// using namespace std;

// class Student {
//     string name;
//     int age;

// public:
//     Student(string n = "Unknown", int a = 0) : name(n), age(a) {}

//     // Overload '==' operator
//     bool operator==(const Student& other) const {
//         return (name == other.name) && (age == other.age);
//     }

//     // Overload '<' operator
//     bool operator<(const Student& other) const {
//         return age < other.age;  // Compare by age
//     }

//     void display() const {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     Student s1("Ali", 20);
//     Student s2("Ali", 20);
//     Student s3("Sara", 22);

//     cout << "Comparing s1 and s2: ";
//     if (s1 == s2)
//         cout << "Equal\n";
//     else
//         cout << "Not Equal\n";

//     cout << "Comparing s1 and s3: ";
//     if (s1 < s3)
//         cout << "s1 is younger than s3\n";
//     else
//         cout << "s1 is older or the same age as s3\n";

//     return 0;
// }

// -------------------- 11------------------------

// #include <iostream>
// using namespace std;

// class calDays
// {
//     int hours;
//     float days;

// public:
//     // Constructor to initialize hours and calculate days
//     calDays(int h = 0) : hours(h)
//     {
//         days = hours / 8.0; // 8 hours = 1 day
//     }

//     // Overloaded product operator (*)
//     calDays operator*(const calDays &obj)
//     {
//         return calDays(this->hours * obj.hours);
//     }

//     // Overloaded subtraction operator (-)
//     calDays operator-(const calDays &obj)
//     {
//         return calDays(this->hours - obj.hours);
//     }

//     // Overloaded post-increment operator (++)
//     calDays operator++(int)
//     {
//         calDays temp = *this; // Store the current state
//         hours++;
//         days = hours / 8.0; // Recalculate days
//         return temp;
//     }

//     // Overloaded assignment operator (=)
//     calDays &operator=(const calDays &obj)
//     {
//         if (this != &obj)
//         { // Avoid self-assignment
//             this->hours = obj.hours;
//             this->days = obj.days;
//         }
//         return *this;
//     }

//     // Display function
//     void printdays() const
//     {
//         cout << "Hours: " << hours << ", Days: " << days << endl;
//     }
// };

// int main()
// {
//     calDays C1(10); // C1 initialized with 10 hours
//     C1++;           // Post-increment
//     C1.printdays(); // Output: C1 = 11 hours

//     calDays C2(24); // C2 initialized with 24 hours
//     C2.printdays(); // Output: C2 = 24 hours

//     calDays C3 = C2 - C1; // Subtraction: 24 - 11 = 13
//     C3.printdays();       // Output: C3 = 13 hours

//     calDays C4 = C3 * C1; // Product: 13 * 11 = 143
//     cout << "C4 = ";
//     C4.printdays(); // Output: C4 = 143 hours

//     C4 = C1++; // Post-incremented C1 assigned to C4
//     cout << "C4 = ";
//     C4.printdays(); // Output: C4 = 12 hours
//     cout << "C1 = ";
//     C1.printdays(); // Output: C1 = 12 hours

//     return 0;
// }

// ---------------------- 12 -----------------------

// #include <iostream>
// using namespace std;

// class Point {
// private:
//     int xCoord;
//     int yCoord;

// public:
//     // Constructor
//     Point(int x = 0, int y = 0) : xCoord(x), yCoord(y) {}

//     // Overloading '+' operator
//     Point operator+(const Point& obj) {
//         return Point(this->xCoord + obj.xCoord, this->yCoord + obj.yCoord);
//     }

//     // Overloading '-' operator
//     Point operator-(const Point& obj) {
//         return Point(this->xCoord - obj.xCoord, this->yCoord - obj.yCoord);
//     }

//     // Overloading '<<' operator (Stream insertion)
//     friend ostream& operator<<(ostream& out, const Point& obj) {
//         out << "(" << obj.xCoord << ", " << obj.yCoord << ")";
//         return out;
//     }

//     // Overloading '>>' operator (Stream extraction)
//     friend istream& operator>>(istream& in, Point& obj) {
//         cout << "Enter x-coordinate: ";
//         in >> obj.xCoord;
//         cout << "Enter y-coordinate: ";
//         in >> obj.yCoord;
//         return in;
//     }

//     // Overloading '=' operator (Assignment)
//     Point& operator=(const Point& obj) {
//         if (this != &obj) {
//             this->xCoord = obj.xCoord;
//             this->yCoord = obj.yCoord;
//         }
//         return *this;
//     }
// };

// int main() {
//     Point p1(3, 4);  // Initialize p1
//     Point p2(1, 2);  // Initialize p2

//     // Addition
//     Point p3 = p1 + p2;
//     cout << "p1 + p2 = " << p3 << endl;

//     // Subtraction
//     Point p4 = p1 - p2;
//     cout << "p1 - p2 = " << p4 << endl;

//     // Stream insertion (output)
//     cout << "Point p1: " << p1 << endl;

//     // Stream extraction (input)
//     Point p5;
//     cin >> p5;
//     cout << "You entered: " << p5 << endl;

//     // Assignment operator
//     Point p6;
//     p6 = p5;
//     cout << "Assigned p5 to p6: " << p6 << endl;

//     return 0;
// }

// -------------------------------13-----------------------

// #include <iostream>
// using namespace std;

// class MyString
// {
// private:
//     char str[100];

// public:
//     // Constructor
//     MyString(const char *s = "")
//     {
//         int i = 0;
//         while (s[i] != '\0')
//         {
//             str[i] = s[i];
//             i++;
//         }
//         str[i] = '\0'; // Null-terminate the string
//     }

//     // Overload '/' operator: Split string manually
//     MyString operator/(char delimiter)
//     {
//         MyString result;
//         int i = 0, j = 0;

//         // Copy characters until the delimiter is found
//         while (str[i] != '\0' && str[i] != delimiter)
//         {
//             result.str[j++] = str[i++];
//         }

//         result.str[j] = '\0'; // Null-terminate the resulting string
//         return result;
//     }

//     MyString operator-(char ch)
//     {
//         MyString result;
//         int k = 0;
//         for (int i = 0; str[i] = '\0'; i++)
//         {
//             if (str[i] != ch)
//             {
//                 result.str[k++] = str[i];
//             }
//         }
//         result.str[k] = '\0';
//         return result;
//     }
//     // Display function
//     void display() const
//     {
//         cout << str << endl;
//     }
// };

// int main()
// {
//     MyString s1("Hello/World/2025");
//     MyString s2 = s1 / '/'; // Splits at the first '/'

//     cout << "Original String: ";
//     s1.display();

//     cout << "First Split Part: ";
//     s2.display();

//     return 0;
// }
