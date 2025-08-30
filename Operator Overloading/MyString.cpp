#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class MyString{
private:
    char str[100];

public:
    MyString()
    {
        str[0] = '\0';
    }
    MyString(const char *s)
    {
        int i = 0;
        while (s[i] != '\0')
        {
            str[i] = s[i];
            i++;
        }
        str[i] = '\0';
    }
    ~MyString() {}

    MyString operator+(const MyString &s)
    {
        char temp[100];
        int i = 0, j = 0;
        while (str[i] != '\0')
        {
            temp[i] = str[i];
            i++;
        }
        while (s.str[j] != '\0')
        {
            temp[i++] = s.str[j++];
        }
        temp[i] = '\0';
        return MyString(temp);
    }

    MyString operator-(const MyString &s)
    {
        char temp[100];
        int i = 0, j = 0, k;
        while (str[i] != '\0')
        {
            bool match = true;
            for (k = 0; s.str[k] != '\0'; k++)
            {
                if (str[i + k] != s.str[k])
                {
                    match = false;
                    break;
                }
            }
            if (match)
            {
                i += k;
            }
            else
            {
                temp[j++] = str[i++];
            }
        }
        temp[j] = '\0';
        return MyString(temp);
    }

    MyString operator*(int n)
    {
        char temp[100] = "";
        int len = 0, i, j;
        while (str[len] != '\0')
            len++;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < len; j++)
            {
                temp[i * len + j] = str[j];
            }
        }
        temp[n * len] = '\0';
        return MyString(temp);
    }

    MyString operator/(const MyString &s)
    {
        char temp[100];
        int i = 0, j = 0, k;
        while (str[i] != '\0')
        {
            bool match = true;
            for (k = 0; s.str[k] != '\0'; k++)
            {
                if (str[i + k] != s.str[k])
                {
                    match = false;
                    break;
                }
            }
            if (match)
            {
                temp[j++] = ' ';
                i += k;
            }
            else
            {
                temp[j++] = str[i++];
            }
        }
        temp[j] = '\0';
        return MyString(temp);
    }

    MyString &operator+=(const MyString &s)
    {
        *this = *this + s;
        return *this;
    }

    MyString &operator-=(const MyString &s)
    {
        *this = *this - s;
        return *this;
    }

    MyString &operator*=(int n)
    {
        *this = *this * n;
        return *this;
    }

    MyString &operator/=(const MyString &s)
    {
        *this = *this / s;
        return *this;
    }

    bool operator==(const MyString &s)
    {
        int i = 0;
        while (str[i] != '\0' && s.str[i] != '\0')
        {
            if (str[i] != s.str[i])
                return false;
            i++;
        }
        return str[i] == '\0' && s.str[i] == '\0';
    }

    bool operator!=(const MyString &s)
    {
        return !(*this == s);
    }

    bool operator<(const MyString &s)
    {
        int i = 0;
        while (str[i] != '\0' && s.str[i] != '\0')
        {
            if (str[i] < s.str[i])
                return true;
            if (str[i] > s.str[i])
                return false;
            i++;
        }
        return str[i] == '\0' && s.str[i] != '\0';
    }

    bool operator<=(const MyString &s)
    {
        return *this < s || *this == s;
    }

    bool operator>(const MyString &s)
    {
        return !(*this <= s);
    }

    bool operator>=(const MyString &s)
    {
        return !(*this < s);
    }

    friend ostream &operator<<(ostream &out, const MyString &s);
    friend istream &operator>>(istream &in, MyString &s);
};

ostream &operator<<(ostream &out, const MyString &s)
{
    out << s.str;
    return out;
}

istream &operator>>(istream &in, MyString &s)
{
    in >> s.str;
    return in;
}

int main()
{
    MyString s1("Hello");
    MyString s2("World");
    MyString s3 = s1 + s2;
    cout << "Concatenation: " << s3 << endl;

    MyString s4 = s3 - MyString("l");
    cout << "Subtraction: " << s4 << endl;

    MyString s5 = s1 * 2;
    cout << "Repetition: " << s5 << endl;

    MyString s6 = s3 / MyString("l");
    cout << "Splitting: " << s6 << endl;

    s1 += s2;
    cout << "Compound Assignment (+=): " << s1 << endl;

    s3 -= MyString("l");
    cout << "Compound Assignment (-=): " << s3 << endl;

    s5 *= 2;
    cout << "Compound Assignment (*=): " << s5 << endl;

    s6 /= MyString("l");
    cout << "Compound Assignment (/=): " << s6 << endl;

    MyString s7("Hello");
    MyString s8("World");
    cout << "Equality: " << (s7 == s8) << endl;
    cout << "Inequality: " << (s7 != s8) << endl;
    cout << "Comparison (<=): " << (s7 <= s8) << endl;
    cout << "Comparison (>=): " << (s7 >= s8) << endl;

    return 0;
}