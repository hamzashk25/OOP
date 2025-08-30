// -------------------------Task 01--------------------
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Circle
{
private:
    double radius;
    double pi = 3.14;

public:
    Circle()
    {
        // radius = 0.0;
    }

    Circle(const double r)
    {
        radius = r;
    }

    void setradius(double r)
    {
        radius = r;
    }

    double getradius() const
    {

        return radius;
    }

    double getArea()
    {
        double area = pi * radius * radius;
        return area;
    }

    double getDiameter()
    {
        double diameter = radius * 2;
        return diameter;
    }

    double getCircumference() {
        double circumference = 2 * pi * radius;
        return circumference;
    }
};

int main()
{
    Circle c;
    c.setradius(4);
    Circle c2(c);
    cout << "Radius of circle is  " << c.getradius() << endl;
    cout << "Area of circle is  " << c.getArea() << endl;
    cout << "Circumference of circle is  " << c.getCircumference() << endl;
    cout << " Diameter of circle is " << c.getDiameter() << endl;
    cout << "Copy constructor of area value " << c2.getArea();
    return 0;
}

// -------------------------Task 02--------------------
// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Date
// {
// private:
//     int month, day, year;
//     string *monthNames = new string[12];

// public:
//     Date()
//     {
//         month = 1;
//         day = 12;
//         year = 2005;
//         monthNames[0] = "January ";
//     }

//     Date(Date &obj)
//     {
//         month = obj.month;
//         day = obj.day;
//         year = obj.year;
//         monthNames[0] = *obj.monthNames;
//     }

//     void setdate(int d)
//     {
//         if (day >= 1 && day <= 31)
//             day = d;
//         if (day >= 1 && day <= 31)
//             day = d;
//     }
// };

// int main()
// {

//     return 0;
// }

