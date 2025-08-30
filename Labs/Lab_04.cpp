// -----------------------------Lab 04-----------------------
// -----------------------------Task 01----------------------

// #include <iostream>
// #include <fstream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class FileHandler
// {
// private:
//     fstream file;
//     string filename;

// public:
//     FileHandler(string filename)
//     {
//         cout << "Parametrized Constructor Invoked " << endl;
//         file.open(filename, ios::out);
//         if (file.is_open())
//         {

//             cout << "File " << filename << " open Successfully " << endl;
//         }
//         else
//             cout << "Unable to open a file " << endl;
//     }

//     ~FileHandler()
//     {
//         cout << "Destructor Invoked " << endl;
//         if (file.is_open())
//         {
//             file.close();
//             cout << "File closed again successfully ";
//         }
//     }
// };
// int main()
// {
//     FileHandler F("hamza.txt");

//     return 0;
// }

// ------------------------------Task 02----------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Matrix
// {
// private:
//     int r, c;

// public:
//     int **mat;
//     Matrix(int row, int col) : r(row), c(col)
//     {
//         mat = new int *[r];
//         for (int i = 0; i < r; i++) // Populate 2d Array
//         {
//             mat[i] = new int[c];
//         }
//     }

//     Matrix(Matrix &obj)
//     {
//         r = obj.r;
//         c = obj.c;
//         mat = new int *[r]; // Deep Copy
//         for (int i = 0; i < r; i++)
//         {
//             mat[i] = new int[c];
//         }
//     }

//     void setmatrix()
//     {
//         cout << "Enter a matrix ";
//         for (int i = 0; i < r; i++)
//         {
//             for (int j = 0; j < c; j++)
//             {
//                 cin >> mat[i][j];
//             }
//         }
//     }

//     void Display()
//     {

//         for (int i = 0; i < r; i++)
//         {
//             for (int j = 0; j < c; j++)
//             {
//                 cout << mat[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     ~Matrix()
//     {
//         for (int i = 0; i < r; i++)
//         {
//             delete[] mat[i];
//         }
//         delete[] mat;
//     }
// };
// int main()
// {
//     Matrix M(2, 2);

//     M.setmatrix();
//     cout << "Matrix 1" << endl;
//     M.Display();
//     cout << endl;

//     Matrix M2(M);
//     M2 = M;
//     cout << "Matrix 2" << endl;
//     M2.Display();
//     cout << endl;

//     M.mat[1][1] = 2;

//     cout << "Matrix 1 After modification " << endl;
//     M.Display();
//     cout << endl;

//     cout << "Matrix 2 After Modification of Matrix 2 " << endl;
//     M2.Display();
//     cout << endl;
//     return 0;
// }

// ----------------------------Task 03---------------------------

// #include <iostream>
// #include <string>
// #include <cstring>
// #include <cstdlib>
// using namespace std;

// class String
// {
// private:
//     char *arr;

// public:
//     String(const char *a)
//     {
//         arr = new char[strlen(a) + 1];
//         for (int i = 0; i < strlen(a); i++)
//         {
//             arr[i] = a[i];
//         }
//         arr[strlen(a)] = '\0';
//     }

//     String(const String &obj)
//     {
//         arr = obj.arr;
//     }

//     void Display()
//     {
//         for (int i = 0; i < strlen(arr); i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     ~String()
//     {
//         delete[] arr;
//     }
// };

// class deepcopy
// {
// private:
//     char *arr;

// public:
//     deepcopy(const char *a)
//     {
//         arr = new char[strlen(a) + 1];
//         for (int i = 0; i < strlen(a); i++)
//         {
//             arr[i] = a[i];
//         }

//         arr[strlen(a)] = '\0';
//     }

//     deepcopy(const deepcopy &obj)
//     {
//         arr = new char[strlen(obj.arr) + 1];
//         for (int i = 0; i < strlen(obj.arr); i++)
//         {
//             arr[i] = obj.arr[i];
//         }
//         arr[strlen(obj.arr)] = '\0';
//     }

//     void Display()
//     {
//         for (int i = 0; i < strlen(arr); i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     ~deepcopy()
//     {
//         delete[] arr;
//     }
// };

// int main()
// {
//     String s1("hamza");
//     String s2(s1); // Shallow copy
//     s1.Display();
//     s2.Display();

//     deepcopy d1("hamza");
//     deepcopy d2(d1); // Deep Copy
//     d1.Display();
//     d2.Display();

//     return 0;
// }

// ----------------------------Task 04----------------------

// #include <iostream>
// using namespace std;

// class DynamicArray
// {
// private:
//     int *arr;
//     int size;

// public:
//     DynamicArray(int s) : size(s)
//     {
//         arr = new int[size];
//         cout << "Default Constructor Called and Array Initialized " << endl;
//     }

//     DynamicArray(const DynamicArray &other) : size(other.size)
//     {
//         arr = new int[size]; // Deep Copy Performed
//         for (int i = 0; i < size; i++)
//         {
//             arr[i] = other.arr[i];
//         }
//         cout << "Copy Constructor called!" << endl;
//     }

//     // Overloaded Assignment Operator: Performs deep copy
//     DynamicArray &operator=(const DynamicArray &other)
//     {
//         if (this != &other)
//         {                 // Self-assignment check
//             delete[] arr; // Free existing memory

//             size = other.size;
//             arr = new int[size];
//             for (int i = 0; i < size; i++)
//             {
//                 arr[i] = other.arr[i];
//             }
//             cout << "Assignment Operator called! Deep copy performed." << endl;
//         }
//         return *this;
//     }

//     void setValue()
//     {
//         cout << "Enter a values ";
//         for (int i = 0; i < size; i++)
//         {
//             cin >> arr[i];
//         }
//     }

//     void display()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     ~DynamicArray()
//     {
//         delete[] arr;
//         cout << "Destructor called! Memory deallocated." << endl;
//     }
// };

// int main()
// {
//     DynamicArray arr1(5);
//     arr1.setValue();
//     arr1.display();

//     DynamicArray arr2 = arr1; // Invokes copy constructor
//     arr2.display();

//     DynamicArray arr3(3);
//     arr3 = arr1; // Invokes overloaded assignment operator
//     arr3.display();

//     return 0;
// }

// ------------------------------Task 05----------------
// #include <iostream>
// #include <string>
// using namespace std;

// class dayType
// {
// private:
//     string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
//     int CDI; // Current Day Index

// public:
//     dayType(string day)
//     {
//         setDay(day);
//     }

//     void setDay(string day)
//     {
//         for (int i = 0; i < 7; i++)
//         {
//             if (days[i] == day)
//             {
//                 CDI = i;
//                 return;
//             }
//         }
//         cout << "Invalid day input! Defaulting to Sunday." << endl;
//         CDI = 0;
//     }

//     void printDay()
//     {
//         cout << "Current Day: " << days[CDI] << endl;
//     }

//     string getDay()
//     {
//         return days[CDI];
//     }

//     string getNextDay()
//     {
//         return days[(CDI + 1) % 7];
//     }

//     string getPreviousDay()
//     {
//         return days[(CDI + 6) % 7];
//     }

//     string addDays(int numDays)
//     {
//         return days[(CDI + numDays) % 7];
//     }
// };

// int main()
// {
//     string present_Day;
//     cout << "Enter the current day: ";
//     cin >> present_Day;

//     dayType D(present_Day);
//     D.printDay();

//     cout << "Next Day: " << D.getNextDay() << endl;
//     cout << "Previous Day: " << D.getPreviousDay() << endl;

//     int daysToAdd;
//     cout << "Enter number of days to add: ";
//     cin >> daysToAdd;
//     cout << "Day after adding " << daysToAdd << " days: " << D.addDays(daysToAdd) << endl;

//     return 0;
// }

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class dayType
{
private:
    string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturaday"};
    int CDI;

public:
    string presentDay(string day)
    {
        for (int i = 0; i < 7; i++)
        {
            if (days[i] == day)
            {
                CDI = i;
            }
        }

        return day;
    }
    string nexDay()
    {
        return days[(CDI + 1) % 7];
    }

    string PreviousDay()
    {
        return days[(CDI + 6) % 7];
    }

    string AddDays(int i)
    {
        return days[(CDI + i) % 7];
    }
};
int main()
{
    string day;
    cout << "Enter a present Day " << endl;
    cin >> day;

    dayType d1;
    cout << "Present Day is " << d1.presentDay(day) << endl;

    cout << "Next Day is " << d1.nexDay() << endl;

    cout << "Previous Day is " << d1.PreviousDay() << endl;

    int add;
    cout << "Enter a days you want to add a present day " << endl;
    cin >> add;

    cout << "Adding days after is " << d1.AddDays(add) << endl;
    return 0;
}