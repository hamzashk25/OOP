#include <iostream>
using namespace std;

class QuizA
{
private:
    int a1, a2;

public:
    // Default constructor initializes both members
    QuizA() : a1(3),a2(0) {}

    // Parameterized constructor initializes a2 and sets a1 to 0
    QuizA(int n) : a2(n),a1(0) {}

    // Setter methods
    void setA1(int n1) { a1 = n1; }
    void setA2(int n2) { a2 = n2; }

    // Swap function
    void swap()
    {
        int temp = a1;
        a1 = a2;
        a2 = temp;
    }

    // Getter methods
    int getA1() { return a1; }
    int getA2() { return a2; }
};

// Main function to test class
int main()
{
    QuizA QA1;    // Default constructor, QA1.a1 = 3, a2 = 0
    QuizA QA2(5); // Parameterized constructor, QA2.a1 = 0, a2 = 5

    cout << QA1.getA1() << " a2= " << QA1.getA2() << endl;
    cout << QA2.getA1() << " a2= " << QA2.getA2() << endl;

    QA1.setA1(7); // QA1.a1 = 7
    QA1.swap();   // Swaps QA1.a1 and QA1.a2  //a1=0 , a2=7

    cout << QA1.getA1() << " a2= " << QA1.getA2() << endl;
    cout << QA2.getA1() << " a2= " << QA1.getA2() << endl; //  A2<----a1=0, A1<---a2=7

    QA1.swap(); // Swaps back  // a1=7,a2=0
    cout << QA1.getA1() << " a2= " << QA1.getA2() << endl;

    return 0;
}
