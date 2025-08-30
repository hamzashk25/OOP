// -----------------------Task 01---------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class Employee
// {
// private:
//     string name;
//     double salary;
//     static double minWage;

// public:
//     void setEmployee(string n, double s)
//     {
//         name = n;
//         salary = s;
//     }

//     string getname()
//     {
//         return name;
//     }

//     double getSalary()
//     {
//         return salary;
//     }

//     void giveRaise(double percentage)
//     {
//         salary = salary + (salary * (percentage / 100));
//         cout << salary << endl;
//     }

//     double CompareSalary(Employee e)
//     {
//         if (salary > e.getSalary())
//             return salary;
//         else
//             return salary;
//     }

//     static double min_Wage()
//     {
//         return minWage;
//     }

//     void Display()
//     {
//         cout << "Name " << name << endl;
//         cout << "Salary " << salary << endl;
//     }
// };

// double Employee::minWage=15000.0;
// int main()
// {
//     Employee E1;
//     E1.setEmployee("Hamza", 78000);
//     E1.Display();
//     cout << "Raise Salary of Employee 1 after 10% is ";
//     E1.giveRaise(10);

//     Employee E2;
//     E2.setEmployee("Awais", 134000);
//     E2.Display();
//     cout << "Highest Salary is " << E2.CompareSalary(E1)<<endl;

//     cout<<"Minimum Wage is the "<<Employee::min_Wage()<<endl;
//     return 0;
// }

// ----------------------------------Task 02-------------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class Complex
// {

// public:
//     Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

//     double real, imaginary;
//     Complex &set_Values(double, double);
//     double getReal();
//     void Display();
//     Complex ADD(Complex c)
//     {
//         return Complex(real + c.real, imaginary + c.imaginary);
//     }

//     Complex Subtract(Complex c)
//     {
//         return Complex(real - c.real, imaginary - c.imaginary);
//     }

//     Complex Multiply(Complex c)
//     {
//         return Complex(real * c.real - imaginary * c.imaginary, real * c.imaginary + imaginary * c.real);
//     }
// };

// Complex &Complex::set_Values(double r, double i)
// {
//     real = r;
//     imaginary = i;
//     return *this;
// }

// double Complex::getReal()
// {
//     return real;
// }

// void Complex::Display()
// {
//     cout << "Real Number is " << real << " And Imaginary part is " << imaginary << "i" << endl;
// }
// int main()
// {
//     Complex obj1;
//     obj1.set_Values(2, 4).set_Values(34, 65).Display();

//     Complex obj2;
//     obj2.set_Values(4, 2).set_Values(65, 34).Display();

//     Complex sum = obj2.ADD(obj1);
//     cout << "Add of complex Numbers is " << endl;
//     sum.Display();

//     Complex subtract = obj2.Subtract(obj1);
//     cout << "Subtract of complex Numbers is " << endl;
//     subtract.Display();

//     Complex Mul = obj2.Multiply(obj1);
//     cout << "Multiply of complex Numbers is " << endl;
//     Mul.Display();
//     return 0;
// }

// ----------------------------Task 03-----------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Book
// {
// private:
//     string title, author;
//     double price;

// public:
//     void setBook(string t, string a, double p)
//     {
//         title = t;
//         author = a;
//         price = p;
//     }

//     string getTitle()
//     {
//         return title;
//     }

//     string getauthor()
//     {
//         return author;
//     }

//     double getPrice()
//     {
//         return price;
//     }

//     void ApplyDiscount(double percentage)
//     {
//         price = price - (price * (percentage / 100));
//         cout << price << endl;
//     }

//     Book comparePrice(Book b)
//     {
//         if (price > b.price)
//             return b;
//         else
//         return *this;
//     }

//     void display()
//     {
//         cout << "Title: " << title <<", Author: "<<author<< ", Price: $" << price << endl;
//     }
// };
// int main()
// {
//     Book book1;
//     book1.setBook("C++ Basics","hamza", 500);
//     Book book2;
//     book2.setBook("Advanced C++","Awais", 300);

//     cout << "Book 1: ";
//     book1.display();

//     cout << "Book 2: ";
//     book2.display();

//     Book cheaperBook = book1.comparePrice(book2);
//     cout << "Cheaper Book: ";
//     cheaperBook.display();

//     return 0;
// }

// ----------------------------Task 04----------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class Car
// {
// private:
//     string brand;
//     int speed, fuel;
// static int max_speed;
// public:
//     Car() : brand("Unknown"), speed(0), fuel(0) {}

//     Car setDetails(string b, int s, int f)
//     {
//         brand = b;
//         speed = s;
//         fuel = f;
//         return *this;
//     }

//     Car accelerates(int a)
//     {
//         speed += a;
//         return *this;
//     }

//     Car &refuel(int amount)
//     {
//         fuel += amount;
//         return *this;
//     }

//     static int maxSpeed()
//     {
//         return max_speed;
//     }

//     void display()
//     {
//         cout << "Brand: " << brand << ", Speed: " << speed << " km/h, Fuel: " << fuel << " L" << endl;
//     }
// };

// int Car::max_speed = 300;
// int main()
// {
//     Car car1;
//     car1.setDetails("Toyota", 120, 50).refuel(20);

//     cout << "Car Details After Refuel:" << endl;
//     car1.display();

//     cout << "Maximum Speed of Cars: " << Car::maxSpeed() << " km/h" << endl;
//     return 0;
// }

// -------------------------Task 05------------------
// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Product{
// private:
//     string name;
//     double price;
//     int stock;
//     static double taxRate;

// public:
//     Product() : name("pencil"), price(0.0), stock(0) {};

//     Product &setProduct(string n, double p, int s)
//     {
//         name = n;
//         price = p;
//         stock = s;
//         return *this;
//     }

//     double getPrice() const
//     {
//         return price;
//     }

//     int getStock() const
//     {
//         return stock;
//     }

//     Product &buy(int quantity)
//     {
//         if (quantity <= stock)
//         {
//             stock -= quantity;
//         }
//         else
//         {
//             cout << "Not enough stock available!" << endl;
//         }
//         return *this;
//     }

//     Product &applyDiscount(double percent)
//     {
//         if (percent > 0 && percent < 100)
//         {
//             price = price - (price * percent / 100);
//         }
//         else
//         {
//             cout << "Invalid discount percentage!" << endl;
//         }
//         return *this;
//     }

//     static double TaxRate()
//     {
//         return taxRate;
//     }

//     void display() const
//     {
//         cout << "Product Name: " << name << endl;
//         cout << "Price: $" << price << endl;
//         cout << "Stock: " << stock << " units" << endl;
//     }
// };

// double Product::taxRate = 15.0;
// int main()
// {
//     Product product1;

//     product1.setProduct("Laptop", 1200.00, 50);
//     cout << "Initial Product Details:" << endl;
//     product1.display();

//     product1.buy(5);
//     cout << "\nAfter Buying 5 Units:" << endl;
//     product1.display();

//     product1.applyDiscount(10);
//     cout << "\nAfter Applying 10% Discount:" << endl;
//     product1.display();

//     cout << "\nTax Rate: " << Product::TaxRate() << "%" << endl;
//     return 0;
// }

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Product
{
    string name;
    int price, stoke;
    static double taxRate;

public:
    Product() : name("Pencil"), price(10), stoke(23) {};
    void setProduct(string n, double p, int s)
    {
        name = n;
        price = p;
        stoke = s;
    }

    int getPrice() { return price; }
    int getStock() { return stoke; }

    Product &Buy(int quantity)
    {
        if (stoke < quantity)
            cout << "Stock is limited ";
        else
            stoke = stoke - quantity;
        return *this;
    }

    void applyDiscount(double percent)
    {
        price = price - (price * percent / 100);
    }

    static double TaxRate()
    {
        taxRate = 122;
        return taxRate;
    }

    void Display()
    {
        cout << "Name " << name << endl;
        cout << "Price " << price << endl;
        cout << "Stock " << stoke << endl;
        cout << "Tax Rate " << taxRate << endl;
    }
};

double Product ::taxRate = 100;
int main()
{

    Product p1, p2;
    p1.setProduct("Laptop", 50000, 21);
    p1.Buy(2);
    p1.applyDiscount(10);
    p1.Display();

    p2.Display();
    return 0;
}