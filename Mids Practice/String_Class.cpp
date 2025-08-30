#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;
class MyString
{
private:
    char *arr;
    int size;

public:
    MyString()
    {
        size = 0;
        arr = new char[1];
        arr[0] = '\0';
    }
    MyString(const char str[])
    {
        size = strlen(str);
        arr = new char[size + 1];
        for (int i = 0; i < size; i++)
        {
            arr[i] = str[i];
        }

        arr[size] = '\0';
    }

    MyString operator+(MyString &s)
    {
        MyString temp_string;
        temp_string.size = size + s.size;                      
        temp_string.arr = new char[temp_string.size + 1]; // Correct allocation

        for (int i = 0; i < size; i++)
        {
            temp_string.arr[i] = arr[i];
        }

        for (int i = 0; i < s.size; i++)
        {
            temp_string.arr[size + i] = s.arr[i];
        }

        temp_string.arr[temp_string.size] = '\0'; // Null-terminate the string

        return temp_string;
    }

    // MyString operator-(char s)
    // {
    //     MyString temp_string;
    //     int new_size = 0;
    
    //     // First, count the number of characters that are not equal to 's'
    //     for (int i = 0; i < size; i++)
    //     {
    //         if (arr[i] != s)
    //         {
    //             new_size++;
    //         }
    //     }
    
    //     // Allocate memory for the new string
    //     temp_string.size = new_size;
    //     temp_string.arr = new char[temp_string.size + 1];
    
    //     // Copy characters that are not equal to 's'
    //     int j = 0;
    //     for (int i = 0; i < size; i++)
    //     {
    //         if (arr[i] != s)
    //         {
    //             temp_string.arr[j] = arr[i];
    //             j++;
    //         }
    //     }
    
    //     // Null-terminate the new string
    //     temp_string.arr[temp_string.size] = '\0';
    
    //     return temp_string;
    // }
    
    MyString operator-( char s)
    {

        MyString temp_string;
        temp_string.size = size; 
        temp_string.arr = new char[size+1]; // Correct allocation

        for (int i = 0; i < size; i++)
        {
            temp_string.arr[i] = arr[i];
        }

        for (int i = 0; i < size; i++)
        {
            if(temp_string.arr[i]==s)
            {
                temp_string.arr[i]=' ';
            }
            
        }
        
        return temp_string;
    }
    
    ~MyString()
    {
        delete[] arr;
    }

    friend ostream &operator<<(ostream &out, const MyString s);
    // friend istream &operator>>(istream &in, MyString s);
};

ostream &operator<<(ostream &out, const MyString s)
{
    out << s.arr;
    return out;
}
int main()
{
    MyString S1("Hello");
    MyString S2("World");

    // MyString S3= S1 + S2;

    MyString S3= S1 - 'l';
    cout << S3;
    return 0;
}