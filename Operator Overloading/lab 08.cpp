// ------------------------Rational Number Class Task--------------------
// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Rational
// {
// private:
//     int numerator, Denomerator;

// public:
//     int setgcd(int a, int b)
//     {
//         while (b != 0)
//         {
//             int r = a % b;
//             a = b;
//             b = r;
//         }
//         return a;
//     }
//     Rational(int p = 30, int q = 50)
//     {
//         numerator = p;
//         Denomerator = q;
//     }

//     Rational operator+(Rational &r)
//     {
//         numerator = (numerator * r.Denomerator) + (r.numerator * Denomerator);
//         Denomerator = (Denomerator * r.Denomerator);
//         if (numerator > Denomerator)
//         {
//             int gcd = setgcd(numerator, Denomerator);
//             numerator /= gcd;
//             Denomerator /= gcd;
//         }
//         return Rational(numerator, Denomerator);
//     }

//     Rational operator-(Rational &r)
//     {
//         numerator = (numerator * r.Denomerator) - (r.numerator * Denomerator);
//         Denomerator = (Denomerator * r.Denomerator);
//         if (numerator > Denomerator)
//         {
//             int gcd = setgcd(numerator, Denomerator);
//             numerator /= gcd;
//             Denomerator /= gcd;
//         }
//         else
//         {
//             int a = numerator;
//             int b = Denomerator;
//             int temp = a;
//             a = b;
//             b = temp;
//             int gcd = setgcd(numerator, Denomerator);
//             numerator /= gcd;
//             Denomerator /= gcd;
//         }
//         return Rational(numerator, Denomerator);
//     }

//     Rational operator*(Rational &r)
//     {
//         numerator = (numerator * r.numerator);
//         Denomerator = (Denomerator * r.Denomerator);

//         return Rational(numerator, Denomerator);
//     }

//     Rational operator/(Rational &r)
//     {

//         numerator = (numerator * r.Denomerator);
//         Denomerator = (Denomerator * r.numerator);
//         return Rational(numerator, Denomerator);
//     }

//     void Display()
//     {
//         cout << "R1+R2=" << numerator << "/" << Denomerator << endl;
//         cout << "R1-R2=" << numerator << "/" << Denomerator << endl;
//         cout << "R1*R2=" << numerator << "/" << Denomerator << endl;
//         cout << "R1/R2=" << numerator << "/" << Denomerator << endl;
//     }
// };
// int main()
// {
//     Rational R1(3, 4);
//     Rational R2(5, 6);

//     Rational R3;
//     R3 = R1 + R2;
//     R3 = R1 - R2;
//     R3 = R1 * R2;
//     R3 = R1 / R2;

//     R3.Display();
//     return 0;
// }

// --------------------------------Task 01----------------------------
// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Student
// {
// private:
//     static int roll_num;
//     string name;
//     int marks;

// public:
//     Student(string n, int m)
//     {
//         name = n;
//         marks = m;
//     }

//     static void Roll_num()
//     {
//         roll_num++;
//     }
//     void Display()
//     {
//         cout << "Name " << name << endl;
//         cout << "Marks " << marks << endl;
//         cout << "Roll Number " << roll_num << endl;
//     }
// };

// int Student ::roll_num = 1;
// int main()
// {
//     Student s1("Hamza", 92);
//     s1.Display();
//     s1.Roll_num();
//     cout << endl;

//     Student s2("Awais", 92);
//     s2.Display();
//     s2.Roll_num();
//     cout << endl;

//     Student s3("Ahmad", 92);
//     s3.Display();
//     s3.Roll_num();
//     cout << endl;

//     Student s4("Hassan", 92);
//     s4.Display();
//     s4.Roll_num();
//     cout << endl;

//     return 0;
// }

// --------------------------Task 02--------------------
// #include <iostream>
// using namespace std;

// class Student
// {
// private:
//     int *marks;
//     int size;
//     double avg;
//     int max;

// public:
//     Student(int s = 3)
//     {
//         size = s;
//         marks = new int[size];
//     }

//     void setMarks()
//     {
//         int Std_marks;
//         cout << "How Many Subjects You Want Marks Enter ";
//         cin >> Std_marks;
//         size = Std_marks;

//         cout << "Enter marks for " << size << " subjects:\n";
//         for (int i = 0; i < size; i++)
//         {
//             cout << "Enter marks for subject " << i + 1 << ": ";
//             cin >> marks[i];
//         }
//         calculateAvg();
//         Highest_marks();
//     }

//     void calculateAvg()
//     {
//         int sum = 0;
//         for (int i = 0; i < size; i++)
//         {
//             sum += marks[i];
//         }
//         avg = sum / size;
//     }

//     void Highest_marks()
//     {
//         max = marks[0];
//         for (int i = 1; i < size; i++)
//         {
//             if (marks[i] > max)
//                 max = marks[i];
//         }
//     }

//     void display()
//     {
//         cout << "\nStudent Marks: ";
//         for (int i = 0; i < size; i++)
//         {
//             cout << marks[i] << " ";
//         }
//         cout << "\nAverage Marks: " << avg;
//         cout << "\nHighest Marks: " << max << endl;
//     }

//     ~Student()
//     {
//         delete[] marks;
//     }
// };

// int main()
// {
//     int Std_Size;
//     cout << "Enter the number of students: ";
//     cin >> Std_Size;

//     Student *students = new Student[Std_Size];

//     for (int i = 0; i < Std_Size; i++)
//     {
//         cout << "\nEntering data for Student " << i + 1 << ":\n";
//         students[i].setMarks();
//     }

//     cout << "\nDisplaying Student Data:\n";
//     for (int i = 0; i < Std_Size; i++)
//     {
//         cout << "\nStudent " << i + 1 << ":\n";
//         students[i].display();
//     }

//     delete[] students;
//     return 0;
// }

// -------------------------Task 03-----------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Matrix
// {
// private:
//     int **mat;
//     int rows, col;

// public:
//     Matrix(int r = 3, int c = 3)
//     {
//         rows = r;
//         col = c;
//         mat = new int *[rows];
//         for (int i = 0; i < rows; i++)
//         {
//             mat[i] = new int[col];
//         }
//     }

//     void Set_matrix()
//     {
//         cout << "Enter a Matrix with " << rows << " by " << col << endl;
//         for (int i = 0; i < rows; i++)
//         {

//             for (int j = 0; j < col; j++)
//             {
//                 cin >> mat[i][j];
//             }
//         }
//     }

//     void Display()
//     {
//         for (int i = 0; i < rows; i++)
//         {

//             for (int j = 0; j < col; j++)
//             {
//                 cout << mat[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     void Row_Sum()
//     {
//         for (int i = 0; i < rows; i++)
//         {
//             int sum = 0;
//             for (int j = 0; j < col; j++)
//             {
//                 sum += mat[i][j];
//             }
//             cout << "Sum of Row " << i + 1 << " = " << sum;
//             cout << endl;
//         }
//     }

//     void Column_Sum()
//     {
//         for (int j = 0; j < col; j++)
//         {
//             int sum = 0;
//             for (int i = 0; i < col; i++)
//             {
//                 sum += mat[i][j];
//             }
//             cout << "Sum of Column " << j + 1 << " = " << sum;
//             cout << endl;
//         }
//     }

//     ~Matrix()
//     {
//         for (int i = 0; i < rows; i++)
//         {
//             delete[] mat[i];
//         }
//         delete[] mat;
//     }
// };
// int main()
// {
//     Matrix m;
//     m.Set_matrix();
//     m.Row_Sum();
//     m.Column_Sum();
//     return 0;
// }

// ---------------------------Task 04------------------
// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Rectangle
// {
// private:
//     int lenght, breadth;

// public:
//     Rectangle(int l = 4, int b = 4)
//     {
//         lenght = l;
//         breadth = b;
//     }

//     Rectangle Sum(Rectangle &r)
//     {
//         Rectangle temp_obj;
//         temp_obj.lenght = lenght + r.lenght;
//         temp_obj.breadth = breadth + r.breadth;
//         return temp_obj;
//     }

//     void Display()
//     {
//         cout << "Lenght " << lenght << endl;
//         cout << "Breadth " << breadth << endl;
//     }
// };
// int main()
// {
//     Rectangle R1(5, 7), R2(2, 3), R3;
//     cout << "\n\nValues of Rectangle 1 : ";
//     R1.Display();

//     cout << "\n\nValues of Rectangle 2 : ";
//     R2.Display();

//     R3=R1.Sum(R2);
//     cout << "\n\nValues of Rectangle 3 : ";
//     R3.Display();
//     return 0;
// }