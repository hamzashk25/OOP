#include <iostream>
#include <string>
using namespace std;

// class Rational
// {
// private:
//     int numerator;
//     int denominator;

//     int gcd(int a, int b)
//     {
//         while (b != 0)
//         {
//             int temp = b;
//             b = a % b;
//             a = temp;
//         }
//         return a;
//     }

//     void reduce()
//     {
//         int gcd_value = gcd(numerator, denominator);
//         numerator /= gcd_value;
//         denominator /= gcd_value;
//         if (denominator < 0)
//         {
//             numerator = -numerator;
//             denominator = -denominator;
//         }
//     }

// public:
//     Rational(int num = 0, int denom = 1) : numerator(num), denominator(denom)
//     {
//         if (denom == 0)
//         {
//             cout << "Error: Denominator cannot be zero. Setting to 1 by default.\n";
//             denominator = 1;
//         }
//         reduce();
//     }

//     Rational operator+(const Rational &other) const
//     {
//         return Rational(numerator * other.denominator + other.numerator * denominator,
//                         denominator * other.denominator);
//     }

//     Rational operator-(const Rational &other) const
//     {
//         return Rational(numerator * other.denominator - other.numerator * denominator,
//                         denominator * other.denominator);
//     }

//     Rational operator*(const Rational &other) const
//     {
//         return Rational(numerator * other.numerator, denominator * other.denominator);
//     }

//     Rational operator/(const Rational &other) const
//     {
//         if (other.numerator == 0)
//         {
//             cout << "Error: Division by zero. Returning unchanged rational number.\n";
//             return *this;
//         }

//         return Rational(numerator * other.denominator, denominator * other.numerator);
//     }

//     friend ostream &operator<<(std::ostream &os, const Rational &r)
//     {
//         os << r.numerator << "/" << r.denominator;
//         return os;
//     }
// };

// int main()
// {
//     int p1, q1, p2, q2;
//     cout << "Enter numerator of first number: ";
//     cin >> p1;
//     cout << "Enter denominator of first number: ";
//     cin >> q1;
//     cout << "Enter numerator of second number: ";
//     cin >> p2;
//     cout << "Enter denominator of second number: ";
//     cin >> q2;

//     Rational r1(p1, q1);
//     Rational r2(p2, q2);

//     cout << "r1 + r2 = " << (r1 + r2) << endl;
//     cout << "r1 - r2 = " << (r1 - r2) << endl;
//     cout << "r1 * r2 = " << (r1 * r2) << endl;
//     cout << "r1 / r2 = " << (r1 / r2) << endl;

//     return 0;
// }

class MyString
{
    string str;
public:
    MyString() : str("") {}
    MyString(string s) : str(s) {}
    ~MyString() {}

    MyString operator+(const MyString& s)
    {
        return MyString(str + s.str);
    }

    MyString operator-(const MyString& s)
    {
        string temp = str;
        size_t pos = temp.find(s.str);
        while (pos != string::npos)
        {
            temp.erase(pos, s.str.length());
            pos = temp.find(s.str);
        }
        return MyString(temp);
    }

    MyString operator*(int n)
    {
        string temp = str;
        for (int i = 1; i < n; i++)
        {
            temp += str;
        }
        return MyString(temp);
    }

    MyString operator/(const MyString& s)
    {
        string temp = str;
        size_t pos = temp.find(s.str);
        while (pos != string::npos)
        {
            temp.replace(pos, s.str.length(), " ");
            pos = temp.find(s.str);
        }
        return MyString(temp);
    }

    MyString& operator+=(const MyString& s)
    {
        str += s.str;
        return *this;
    }

    MyString& operator-=(const MyString& s)
    {
        size_t pos = str.find(s.str);
        while (pos != string::npos)
        {
            str.erase(pos, s.str.length());
            pos = str.find(s.str);
        }
        return *this;
    }

    MyString& operator*=(int n)
    {
        string temp = str;
        for (int i = 1; i < n; i++)
        {
            str += temp;
        }
        return *this;
    }

    MyString& operator/=(const MyString& s)
    {
        size_t pos = str.find(s.str);
        while (pos != string::npos)
        {
            str.replace(pos, s.str.length(), " ");
            pos = str.find(s.str);
        }
        return *this;
    }

    bool operator==(const MyString& s)
    {
        return str == s.str;
    }

    bool operator!=(const MyString& s)
    {
        return str != s.str;
    }

    bool operator<(const MyString& s)
    {
        return str < s.str;
    }

    bool operator<=(const MyString& s)
    {
        return str <= s.str;
    }

    bool operator>(const MyString& s)
    {
        return str > s.str;
    }

    bool operator>=(const MyString& s)
    {
        return str >= s.str;
    }

    friend ostream& operator<<(ostream& out, const MyString& s);

    friend istream& operator>>(istream& in, MyString& s);
};

ostream& operator<<(ostream& out, const MyString& s)
{
    out << s.str;
    return out;
}

istream& operator>>(istream& in, MyString& s)
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

    MyString   s4 = s3 - MyString("l");
    cout << "Subtraction: " << s4 << endl;

    MyString s5 = s1 * 3;
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
