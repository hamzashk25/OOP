// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// private:
//     string name, grade;
//     int ID, year_of_Birth;
//     float cgpa;
//     int *marks;
//     int numAssignments;

// public:
//     int min, max, avg, sum;

//     // Default Parameterized Constructor
//     Student(string n = "hamza", int id = 78, int Year = 2006, float c = 3.8, int assign = 3)
//     {
//         name = n;
//         ID = id;
//         year_of_Birth = Year;
//         cgpa = c;
//         numAssignments = assign;
//         marks = new int[numAssignments];

//         sum = 0;
//         max = 0;
//         min = 100; // Assuming marks are between 0-100

//         for (int i = 0; i < numAssignments; i++)
//         {
//             cout << "Assignment " << i + 1 << " marks: ";
//             cin >> marks[i];
//             sum += marks[i];
//             if (marks[i] > max)
//                 max = marks[i];
//             if (marks[i] < min)
//                 min = marks[i];
//         }

//         avg = sum / numAssignments;
//         setGrade();
//     }

//     // Copy Constructor (Deep Copy)
//     Student(const Student &obj, string n, int id)
//     {
//         name = n;
//         ID = id;
//         year_of_Birth = obj.year_of_Birth;
//         cgpa = obj.cgpa;
//         grade = obj.grade;
//         numAssignments = obj.numAssignments;

//         marks = new int[numAssignments];
//         for (int i = 0; i < numAssignments; i++)
//         {
//             marks[i] = obj.marks[i];
//         }

//         min = obj.min;
//         max = obj.max;
//         avg = obj.avg;
//         sum = obj.sum;
//     }

//     // Getter and Setter Functions
//     void setStudent(string n, int id, int Year, float c)
//     {
//         name = n;
//         ID = id;
//         year_of_Birth = Year;
//         cgpa = c;
//     }

//     string getName() { return name; }
//     int getId() { return ID; }
//     int getYear_of_Birth() { return year_of_Birth; }
//     float getCgpa() { return cgpa; }
//     int getMarks(int i) { return marks[i]; }
//     int getNumAssignments() { return numAssignments; }

//     // Function to Assign Grade Based on Average Marks
//     void setGrade()
//     {
//         if (avg >= 90)
//         {
//             grade = "A+";
//             cgpa = 4.0;
//         }
//         else if (avg >= 80)
//         {
//             grade = "A";
//             cgpa = 3.8;
//         }
//         else if (avg >= 70)
//         {
//             grade = "A-";
//             cgpa = 3.6;
//         }
//         else if (avg >= 60)
//         {
//             grade = "B+";
//             cgpa = 3.2;
//         }
//         else if (avg >= 50)
//         {
//             grade = "B";
//             cgpa = 3.0;
//         }
//         else if (avg >= 40)
//         {
//             grade = "B-";
//             cgpa = 2.8;
//         }
//         else
//         {
//             grade = "F";
//             cgpa = 2.0;
//         }
//     }

//     // Function to Display Student Information
//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "ID: " << ID << endl;
//         cout << "Year of Birth: " << year_of_Birth << endl;
//         cout << "Max Marks: " << max << endl;
//         cout << "Min Marks: " << min << endl;
//         cout << "Average Marks: " << avg << endl;
//         cout << "Grade: " << grade << endl;
//         cout << "CGPA: " << cgpa << endl;
//     }

//     // Destructor
//     ~Student()
//     {
//         cout << "Destructor Invoked for " << name << endl;
//         delete[] marks;
//     }
// };

// // Function to Input Multiple Students
// void inputStudents(Student students[], int count)
// {
//     for (int i = 0; i < count; i++)
//     {
//         string name;
//         int id, year, assign;
//         float cgpa;

//         cout << "\nEnter details for Student " << i + 1 << ":\n";
//         cout << "Name: ";
//         cin >> name;
//         cout << "ID: ";
//         cin >> id;
//         cout << "Year of Birth: ";
//         cin >> year;
//         cout << "CGPA: ";
//         cin >> cgpa;
//         cout << "Number of Assignments: ";
//         cin >> assign;

//         students[i] = Student(name, id, year, cgpa, assign);
//     }
// }

// // Function to Display All Students
// void displayStudents(Student students[], int count)
// {
//     for (int i = 0; i < count; i++)
//     {
//         cout << "\nStudent " << i + 1 << " Information:\n";
//         students[i].display();
//     }
// }

// // Function to Find the Topper
// void topper(Student students[], int count)
// {
//     int maxIndex = 0;
//     for (int i = 1; i < count; i++)
//     {
//         if (students[i].sum > students[maxIndex].sum)
//         {
//             maxIndex = i;
//         }
//     }
//     cout << "\nTopper:\n";
//     students[maxIndex].display();
// }

// // Overloaded Sort Function
// void sortStudents(Student students[], int count, string criteria)
// {
//     for (int i = 0; i < count - 1; i++)
//     {
//         for (int j = 0; j < count - i - 1; j++)
//         {
//             if ((criteria == "name" && students[j].getName() > students[j + 1].getName()) ||
//                 (criteria == "id" && students[j].getId() > students[j + 1].getId()) ||
//                 (criteria == "marks" && students[j].sum > students[j + 1].sum))
//             {
//                 swap(students[j], students[j + 1]);
//             }
//         }
//     }
// }

// // Main Function
// int main()
// {
//     int count;
//     cout << "Enter the number of students: ";
//     cin >> count;

//     Student *students = new Student[count];

//     inputStudents(students, count);
//     displayStudents(students, count);

//     topper(students, count);

//     string criteria;
//     cout << "\nEnter sorting criteria (name/id/marks): ";
//     cin >> criteria;
//     sortStudents(students, count, criteria);

//     cout << "\nSorted Students:\n";
//     displayStudents(students, count);

//     delete[] students;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class ArrayADT
// {
// private:
//     int arr[100];
//     int size;

// public:
//     ArrayADT() : size(0) {}

//     void InsertBegin(int value)
//     {
//         if (size >= 100)
//             return;
//         for (int i = size; i > 0; --i)
//             arr[i] = arr[i - 1];
//         arr[0] = value;
//         size++;
//     }

//     void InsertLast(int value)
//     {
//         if (size < 100)
//             arr[size++] = value;
//     }

//     void Remove(int value)
//     {
//         for (int i = 0; i < size; ++i)
//         {
//             if (arr[i] == value)
//             {
//                 for (int j = i; j < size - 1; ++j)
//                     arr[j] = arr[j + 1];
//                 size--;
//                 break;
//             }
//         }
//     }

//     void Removeall(int value)
//     {
//         int newSize = 0;
//         for (int i = 0; i < size; ++i)
//             if (arr[i] != value)
//                 arr[newSize++] = arr[i];
//         size = newSize;
//     }

//     void Display()
//     {
//         for (int i = 0; i < size; ++i)
//             cout << arr[i] << " ";
//         cout << endl;
//     }

//     void Update(int index, int newValue)
//     {
//         if (index >= 0 && index < size)
//             arr[index] = newValue;
//         else
//             cout << "Invalid index!" << endl;
//     }

//     bool Search(int value)
//     {
//         for (int i = 0; i < size; ++i)
//             if (arr[i] == value)
//                 return true;
//         return false;
//     }

//     void Index_at(int index)
//     {
//         if (index >= 0 && index < size)
//             cout << "Value at index " << index << " is: " << arr[index] << endl;
//         else
//             cout << "Invalid index!" << endl;
//     }

//     void Sort_list()
//     {
//         for (int i = 0; i < size - 1; ++i)
//             for (int j = 0; j < size - i - 1; ++j)
//                 if (arr[j] > arr[j + 1])
//                     swap(arr[j], arr[j + 1]);
//     }

//     ArrayADT Copylist()
//     {
//         ArrayADT newList;
//         for (int i = 0; i < size; ++i)
//             newList.arr[i] = arr[i];
//         newList.size = size;
//         return newList;
//     }

//     int Sum()
//     {
//         int sum = 0;
//         for (int i = 0; i < size; ++i)
//             sum += arr[i];
//         return sum;
//     }

//     void Empty()
//     {
//         size = 0;
//     }

//     ArrayADT Addlist(const ArrayADT &other)
//     {
//         ArrayADT newList;
//         for (int i = 0; i < size; ++i)
//             newList.arr[newList.size++] = arr[i];
//         for (int i = 0; i < other.size; ++i)
//             newList.arr[newList.size++] = other.arr[i];
//         return newList;
//     }

//     void Removeduplicate()
//     {
//         for (int i = 0; i < size; ++i)
//         {
//             for (int j = i + 1; j < size;)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     for (int k = j; k < size - 1; ++k)
//                         arr[k] = arr[k + 1];
//                     size--;
//                 }
//                 else
//                 {
//                     j++;
//                 }
//             }
//         }
//     }
// };

// int main()
// {
//     ArrayADT list;
//     list.InsertBegin(10);
//     list.InsertLast(20);
//     list.InsertLast(10);
//     list.InsertLast(30);
//     list.Display();
//     list.Remove(10);
//     list.Display();
//     list.Removeall(10);
//     list.Display();
//     list.Update(1, 50);
//     list.Display();
//     list.Index_at(1);
//     list.Sort_list();
//     list.Display();
//     ArrayADT copy = list.Copylist();
//     copy.Display();
//     cout << "Sum: " << list.Sum() << endl;
//     list.Removeduplicate();
//     list.Display();
//     return 0;
// }

#include <iostream>

class STRING {
private:
    char* str;
    int size;

public:
    // Constructors
    STRING() : str(nullptr), size(0) {}
    STRING(const char* s);
    STRING(const STRING& other);

    // Destructor
    ~STRING();

    // Getter & Setter
    int getSize() const { return size; }
    void setString(const char* s);

    // Methods
    void insert(const char* s);
    int length() const;
    void reverse();
    void concatenate(const STRING& S2);
    void copy(const STRING& S2);
    void append(const STRING& S2, int startPos, int noOfChar);
    bool find(const char* subStr) const;
    void display() const;
    char at(int index) const;
    void erase();
};

// Constructor with parameter
STRING::STRING(const char* s) {
    size = 0;
    while (s[size] != '\0') size++;
    str = new char[size + 1];
    for (int i = 0; i < size; i++) {
        str[i] = s[i];
    }
    str[size] = '\0';
}

// Copy Constructor
STRING::STRING(const STRING& other) {
    size = other.size;
    str = new char[size + 1];
    for (int i = 0; i < size; i++) {
        str[i] = other.str[i];
    }
    str[size] = '\0';
}

// Destructor
STRING::~STRING() {
    delete[] str;
}

// Set String
void STRING::setString(const char* s) {
    delete[] str;
    size = 0;
    while (s[size] != '\0') size++;
    str = new char[size + 1];
    for (int i = 0; i < size; i++) {
        str[i] = s[i];
    }
    str[size] = '\0';
}

// Insert String
void STRING::insert(const char* s) {
    setString(s);
}

// Get Length
int STRING::length() const {
    return size;
}

// Reverse String
void STRING::reverse() {
    for (int i = 0; i < size / 2; i++) {
        char temp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = temp;
    }
}

// Concatenate Strings
void STRING::concatenate(const STRING& S2) {
    int newSize = size + S2.size;
    char* newStr = new char[newSize + 1];
    for (int i = 0; i < size; i++) newStr[i] = str[i];
    for (int i = 0; i < S2.size; i++) newStr[size + i] = S2.str[i];
    newStr[newSize] = '\0';
    delete[] str;
    str = newStr;
    size = newSize;
}

// Copy String
void STRING::copy(const STRING& S2) {
    setString(S2.str);
}

// Append Substring
void STRING::append(const STRING& S2, int startPos, int noOfChar) {
    if (startPos < 0 || startPos >= S2.size) return;
    int appendSize = (startPos + noOfChar > S2.size) ? S2.size - startPos : noOfChar;
    int newSize = size + appendSize;
    char* newStr = new char[newSize + 1];
    for (int i = 0; i < size; i++) newStr[i] = str[i];
    for (int i = 0; i < appendSize; i++) newStr[size + i] = S2.str[startPos + i];
    newStr[newSize] = '\0';
    delete[] str;
    str = newStr;
    size = newSize;
}

// Find Substring
bool STRING::find(const char* subStr) const {
    int subLen = 0;
    while (subStr[subLen] != '\0') subLen++;
    for (int i = 0; i <= size - subLen; i++) {
        int j = 0;
        while (j < subLen && str[i + j] == subStr[j]) j++;
        if (j == subLen) return true;
    }
    return false;
}

// Display String
void STRING::display() const {
    if (str) std::cout << str << std::endl;
}

// Get Character at Index
char STRING::at(int index) const {
    if (index >= 0 && index < size) return str[index];
    return '\0';
}

// Erase String
void STRING::erase() {
    delete[] str;
    str = nullptr;
    size = 0;
}

// Main Function for Testing
int main() {
    STRING S1("HELLO");
    S1.display();
    STRING S2("WORLD");
    S1.append(S2, 1, 3);
    S1.display(); // Output: HELLOORL
    S1.reverse();
    S1.display(); // Output: LROOLLEH
    std::cout << "Character at index 2: " << S1.at(2) << std::endl;
    std::cout << "Find 'OL': " << (S1.find("OL") ? "Yes" : "No") << std::endl;
    S1.erase();
    S1.display(); // Should print nothing
    return 0;
}