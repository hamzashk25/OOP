// #include <iostream>
// #include <string>
// #include <cstring>
// #include <cstdlib>
// using namespace std;
// class Binary
// {
// private:
//     int No_of_Bits;
//     int *Binary_Numbers;

// public:

//     Binary(string n)
//     {
//         No_of_Bits = n.length();
//         Binary_Numbers = new int[No_of_Bits];

//         for (int i = 0; i < No_of_Bits; i++)
//         {
//             Binary_Numbers[i] = n[i] - '0';
//         }
//     }

//     Binary operator+(Binary &b)
//     {
//         Binary temp("0000");
//         temp.No_of_Bits = No_of_Bits;
//         temp.Binary_Numbers = new int[temp.No_of_Bits];

//         int sum = 0;
//         for (int i = No_of_Bits - 1; i >= 0; i--)
//         {
//             sum = Binary_Numbers[i] + b.Binary_Numbers[i];
//             if (sum == 2)
//             {
//                 temp.Binary_Numbers[i] = 0;
//                 Binary_Numbers[i - 1] += 1;
//             }
//             else if (sum == 3)
//             {
//                 temp.Binary_Numbers[i] = 1;
//                 Binary_Numbers[i - 1] += 1;
//             }
//             else
//             {
//                 temp.Binary_Numbers[i] = sum;
//             }

//             if (i == 0 && Binary_Numbers[i] == 1)
//             {
//                 temp.No_of_Bits++;
//                 int *temp1 = new int[temp.No_of_Bits];
//                 temp1[0] = 1;
//                 for (int i = 1; i < temp.No_of_Bits; i++)
//                 {
//                     temp1[i] = temp.Binary_Numbers[i - 1];
//                 }
//                 delete[] temp.Binary_Numbers;
//                 temp.Binary_Numbers = temp1;
//             }
//         }

//         return temp;
//     }

//     int &operator[](int index)
//     {
//         if (index >= 0 && index < No_of_Bits)
//         {
//             return Binary_Numbers[index];
//         }
//         else
//             cout << "You enter a wrong index ";
//     }
//     void Print()
//     {
//         for (int i = 0; i < No_of_Bits; i++)
//         {
//             cout << Binary_Numbers[i] << " ";
//         }
//         cout << endl;
//     }
//     ~Binary()
//     {
//         delete[] Binary_Numbers;
//     }
// };
// int main()
// {
//     Binary b1("1000");
//     b1.Print();

//     // Binary b2("1010");
//     // b2.Print();

//     // Binary b3 = b1 + b2;
//     // b3.Print();
//     return 0;
// }

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Energy
{
private:
    int joules;
    float Calories;
    float Kilowatt_hours;

public:
    Energy()
    {
        joules = 1;
        Calories = 4.184;
        Kilowatt_hours = 3600000;
    }

    Energy operator+(Energy e)
    {
        Energy temp_Energy;
        temp_Energy.joules = joules + e.joules;
        return temp_Energy;
    }

    Energy operator-(Energy e)
    {
        Energy temp_Energy;
        temp_Energy.joules = joules + e.joules;
        return temp_Energy;
    }

    Energy operator*(int num)
    {
        Energy temp_Energy;
        temp_Energy.joules = joules * num;
        return temp_Energy;
    }

    Energy operator/(int num)
    {
        Energy temp_Energy;
        temp_Energy.joules = joules / num;
        return temp_Energy;
    }
};
int main()
{

    Energy E1;
    return 0;
}