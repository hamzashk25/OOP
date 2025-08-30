#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class List
{
private:
    int *arr;
    int size;
    int pos;

public:
    List()
    {
        size = 5;
        arr = new int[size];
    }

    List(int s)
    {
        size = s;
        arr = new int[size];
    }

    List &operator+(List &l)
    {

        int max, min;
        if (size > l.size)
        {
            max = size;
            min = l.size;
        }
        else
        {
            max = l.size;
            min = size;
        }

        List temp_list;

        for (int i = 0; i < min; i++)
        {
            arr[i] += l.arr[i];
        }

        for (int i = 0; i < max; i++)
        {
            arr[i] = arr[i];
        }

        return *this;
    }

    List &operator*(List &l)
    {

        int max, min;
        if (size > l.size)
        {
            max = size;
            min = l.size;
        }
        else
        {
            max = l.size;
            min = size;
        }

        List temp_list;

        for (int i = 0; i < min; i++)
        {
            arr[i] *= l.arr[i];
        }

        for (int i = 0; i < max; i++)
        {
            arr[i] = arr[i];
        }

        return *this;
    }

    List &operator*(int num)
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] *= num;
        }
    }

    List &operator==(List &temp_List)
    {
        if (this == &temp_List)
            return *this;
    }

    // int &operator[](int index)
    // {
    //     if (index >= 0 && index < size)
    //     {
    //         return arr[index];
    //     }
    // }

    int &operator[](int index)
    {
        if (index < 0 && index > size)
        {
            cout << "Index not Valid ";
        }
        else
            return arr[index];
    }

    friend istream &operator>>(istream &in, List &l);

    friend ostream &operator<<(ostream &out, List &l);
};

istream &operator>>(istream &in, List &l)
{
    for (int i = 0; i < l.size; i++)
    {
        in >> l.arr[i];
    }
}

ostream &operator<<(ostream &out, List &l)
{
    for (int i = 0; i < l.size; i++)
    {
        out << l.arr[i] << " ";
    }
}

int main()
{
    List l1(5);
    List l2(3);

    cout << "Enter a list ONE Elements " << endl;
    cin >> l1;

    cout << "Enter a list Two Elements " << endl;
    cin >> l2;

    // cout << "Additiion of both list is ";
    // cout << l1 + l2;
    // cout<<"Multiplication with Scalar Number is ";
    // l1 * 2;

    cout << "Multiplication with Both Lists is " << endl;
    cout << l1 * l2;

    cout << "Change number with index of 0 with help of Subscript Operator Overloaded " << endl;
    l1[0] = 2;

    cout << l1;
    return 0;
}

// #include <iostream>
// using namespace std;
// class Array {
// private:
//     int arr[5]; // Fixed-size array

// public:
//     // Constructor to initialize array
//     Array() {
//         for (int i = 0; i < 5; i++)
//             arr[i] = i * 10; // Example values
//     }

//     // Overloading [] operator (Non-const version for modification)
//     int& operator[](int index) {
//         if (index < 0 || index >= 5) {
//             cout << "Index out of bounds! Returning first element." << endl;
//             return arr[0]; // Failsafe return
//         }
//         return arr[index]; // Return reference
//     }

//     // Overloading [] operator (Const version for read-only access)
//     int operator[](int index) const {
//         if (index < 0 || index >= 5) {
//             cout << "Index out of bounds! Returning 0." << endl;
//             return 0;
//         }
//         return arr[index]; // Return value
//     }
// };

// int main() {
//     Array myArray;

//     cout << "Initial values:\n";
//     for (int i = 0; i < 5; i++)
//         cout << myArray[i] << " "; // Calls operator[]

//     cout << "\n\nModifying values using operator[]:\n";
//     myArray[2] = 99; // Modify element at index 2
//     for (int i = 0; i < 5; i++)
//         cout << myArray[i] << " "; // Updated values

//     cout << "\n\nTesting out-of-bounds access:\n";
//     cout << myArray[10] << endl; // Calls failsafe return

//     return 0;
// }
