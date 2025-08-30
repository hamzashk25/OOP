// ------------------------ 1 ---------------------------
// #include <iostream>
// using namespace std;

// class Alpha {
// public:
//     int f() { return 1; }
//     virtual int g() { return 2; }
// };

// class Beta : public Alpha {
// public:
//     int f() { return 3; }
//     int g() override { return 4; }
// };

// class Gamma : public Beta {
// public:
//     int g() override { return 5; }
// };

// int main() {
//     Alpha *pa;
//     Alpha a;
//     Beta b;
//     Gamma g;

//     pa = &a;
//     cout << pa->f() << endl;  // Alpha::f => 1
//     cout << pa->g() << endl;  // Alpha::g => 2

//     pa = &b;
//     cout << pa->f() << endl;  // Alpha::f (not virtual) => 1
//     cout << pa->g() << endl;  // Beta::g => 4

//     pa = &g;
//     cout << pa->f() << endl;  // Alpha::f (not virtual) => 1
//     cout << pa->g() << endl;  // Gamma::g => 5

//     return 0;
// }

// ----------------------- 2 ----------------------
// ------------------- Important -------------
// #include <iostream>
// using namespace std;

// class ClassA
// {
// public:
//     ClassA()
//     {
//         cout << "Class A constructor" << endl;
//     }
//     ClassA(const ClassA &obj)
//     {
//         cout << "Class A copy constructor" << endl;
//     }
//     ClassA &operator=(const ClassA &obj)
//     {
//         cout << "Class A assignment operator" << endl;
//         return *this;
//     }
//     ~ClassA()
//     {
//         cout << "Class A destructor" << endl;
//     }
// };

// class ClassB : public ClassA
// {
// public:
//     ClassB()
//     {
//         cout << "Class B constructor" << endl;
//     }
//     ClassB(const ClassB &obj)
//     {
//         cout << "Class B copy constructor" << endl;
//     }
//     ~ClassB()
//     {
//         cout << "Class B destructor" << endl;
//     }
// };

// class ClassD : ClassA
// {
// public:
//     ClassD()
//     {
//         cout << "Class D constructor" << endl;
//     }

//     ~ClassD()
//     {
//         cout << "Class D destructor" << endl;
//     }
// };

// class ClassC : public ClassA
// {
// private:
//     ClassB newB;
//     ClassA *newA;

// public:
//     ClassC()
//     {
//         cout << "Class C constructor" << endl;
//     }
//     ClassC(const ClassC &obj) : ClassA(obj)
//     {
//         cout << "Class C copy constructor" << endl;
//     }
//     ClassC &operator=(const ClassC &obj)
//     {
//         cout << "Class C assignment operator" << endl;
//         return *this;
//     }
//     ~ClassC()
//     {
//         cout << "Class C destructor" << endl;
//     }
// };

// void Test(ClassA &newA, ClassC newC)
// {
//     newA = newC;
// }

// int main()
// {
//     ClassC newC;
//     cout << "===================" << endl;
//     Test(newC, newC);
//     cout << "===================" << endl;
//     return 0;
// }

