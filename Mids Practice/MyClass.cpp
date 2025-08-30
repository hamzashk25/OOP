#include <iostream>
using namespace std;

class myClass
{
public:
    // Constructor with default parameter
    myClass(int a = 0)
    {
        x = a;
    }

    // Member function to set value of x
    void setX(int a)
    {
        x = a;
    }

    // Member function to output the value of x
    void printX() const
    {
        cout << "X is " << x << endl;
    }

    // Static function to output the value of count
    static void printCount()
    {
        cout << "Count is " << count << endl;
    }

    // Static function to increment count
    static void incrementCount()
    {
        count++;
    }


private:
    int x; // Member variable for instance data
    static int count;      // Static member variable shared by all instances
};

// Initialize static variable `count` outside the class
int myClass::count = 0;

int main()
{
    myClass myObject1;  // x = 0
    myObject1.setX(5);  // x = 5
    myObject1.printX(); // Output: x = 5

    myObject1.incrementCount(); // count = 1
    myClass::incrementCount();  // count = 2
    myObject1.printCount();
    
    
    // myClass::printCount();       // Output: count = 2

    cout << endl;

    myClass myObject2(7); // x = 7
    myObject2.incrementCount(); // count = 3
    // myObject2.printCount();

    cout << endl;
    myObject2.printX(); // Output: x = 7

    cout << endl;

    myObject1.setX(14);
    myObject1.incrementCount(); // count = 4
    myObject1.printX();

    cout << endl;

    myObject1.printCount();
    cout << endl;

    myObject2.printCount();

    return 0;
}
