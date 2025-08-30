//------------------------------------ Task 01-----------------------------------
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class person
{
private:
    string name;
    string cnic;        
    int age;

public:
    void setname(string n)
    {
        name = n;
    }

    void setcnic(string c)
    {
        cnic = c;
    }

    void setage()
    {
        int a;
        cout << "Enter a age of Person :";

        bool flag = true;
        while (flag)
        {
            cin >> a;
            age = a;
            if (age <= 100 && age >= 1)
            {
                flag = false;
            }
            else
                cout << "Invalid! Again enter a age ";
        }
    }

    string getname()
    {
        return name;
    }

    string getcnic()
    {
        return cnic;
    }

    int getage()
    {
        return age;
    }

    person get_info(person s)
    {
        cout << "Name of Person " << s.name << endl;
        cout << "CNIC of Person " << s.cnic << endl;
        cout << "Age of Person  " << s.age << endl;
    }
};

int main()
{
    person p;
    p.setcnic("36748-23456-2345");
    cout << p.getcnic();
    // p.setname("hamza");
    // p.setage();

    // p.get_info(p);
    return 0;
}

// ------------------------------------ Task 02-----------------------------------
// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class Student{
// private:
//     string name;
//     string cnic;
//     int age;

// public:
//     void setname(string n)
//     {
//         name = n;
//     }

//     void setcnic(string c)
//     {
//         cnic = c;
//     }

//     void setage()
//     {
//         int a;
//         cout << "Enter a age of Student :";

//         bool flag = true;
//         while (flag)
//         {
//             cin >> a;
//             age = a;
//             if (age <= 100 && age >= 1)
//             {
//                 flag = false;
//             }
//             else
//                 cout << "Invalid! Again enter a age ";
//         }
//     }

//     string getname()
//     {
//         return name;
//     }

//     string getcnic()
//     {
//         return cnic;
//     }

//     int getage()
//     {
//         return age;
//     }

//     Student get_info(Student s)
//     {
//         cout << "Name of Student " << s.name << endl;
//         cout << "CNIC of Student " << s.cnic << endl;
//         cout << "Age of Student  " << s.age << endl;
//     }
// };

// int main()
// {
//     Student s;
//     s.setname("Awais");
//     s.setage();
//     s.setcnic("36748-23456-2345");
//     s.get_info(s);
//     return 0;
// }

// -----------------------------------Task 03-----------------------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class circle
// {
// private:
//     const float pi = 3.14;
//     int radius;

// public:
//     void setRadius(int r){
//         radius = r;
//     }
//     int getRadius(){
//         return radius;
//     }
//     int getArea(){
//         cout<<"The Area of Circle is ";
//         return pi * radius;
//     }
// };

// int main()
// {
//     circle c;
//     c.setRadius(10);
//     cout << c.getArea();
//     return 0;
// }

// --------------------------------Task 03----------------------
// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class Password_Manager
// {
// private:
//     string password;

// public:
//     int set_pas(string pass)
//     {
//         password = pass;
//     }
// };
// int main()
// {
//     Password_Manager p;
//     string pass;
//     cout << "Enter a Password ";
//     cin >> pass;
//     p.set_pas(pass);
//     return 0;
// }

// -------------------------Task 05-------------------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class product
// {
// private:
//     string name;
//     int price;
//     int stoke;

// public:
//     void set_stoke(int s)
//     {
//         stoke = s;
//     }

//     int get_stoke()
//     {
//         return stoke;
//     }

//     string setName()
//     {
//         string n;
//         cout << "Enter a name ";
//         cin >> n;
//         name = n;
//         return name;
//     }

//     string getName()
//     {
//         return name;
//     }

//     int setPrice()
//     {
//         int p;
//         cout << "Enter a price ";
//         bool flag = true;
//         while (flag)
//         {
//             cin >> p;
//             price = p;
//             if (price >= 1)
//             {
//                 flag = false;
//             }
//             else
//                 cout << "You enter a invalid price, Please Again Enter ";
//         }
//         return price;
//     }

//     int getPrice()
//     {
//         return price;
//     }

//     void updateProduct(string n, int p)
//     {
//         cout<<"Enter a updated Product Name ";
//         cin>>n;
//         cout<<"Enter a updated Price Name ";
//         bool flag = true;
//         while (flag)
//         {
//             cin >> p;
//             price = p;
//             if (price >= 1)
//             {
//                 flag = false;
//             }
//             else
//                 cout << "You enter a invalid price, Please Again Enter ";
//         }
//         name = n;
//     }

//     void product_Detail()
//     {
//         cout << "Name  of Product is " << name<<endl;
//         cout << "Price of Product is " << price;
//     }
// };

// int main()
// {
//     product p;
//     string name = p.setName();
//     int price = p.setPrice();

//     p.updateProduct(name, price);
//     p.product_Detail();

//     return 0;
// }
// ------------------------------Task 06-------------------

// #include <iostream>
// #include <string>
// #include <cstring>
// #include <cstdlib>
// using namespace std;
// class Upper_caseName
// {
// private:
//     char name[6];

// public:
//     void setname()
//     {
//         char n[6];
//         cout<<"Enter a Name in LowerCase letters : ";
//         cin>>n;
//         int a = strlen(n);
//         for (int i = 0; i < a; i++)
//         {
//             name[i] = n[i];
//         }
//     }

//     char *getname()
//     {
//         return name;
//     }

//     void uppercase()
//     {
//         cout<<"The Capatilized Letter is ";
//         for (int i = 0; i < 6; i++)
//         {
//             cout << static_cast<char>(toupper(name[i]));
//         }
//     }
// };

// int main()
// {
//     Upper_caseName U;
//     U.setname();
//     U.getname();

//     U.uppercase();
//     return 0;
// }

// ------------------------------Task 07-------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Student
// {
// private:
//     float gpa;
//     string name;

// public:
//     void setName(string n)
//     {
//         name = n;
//     }
//     string getName()
//     {
//         return name;
//     }
//     void setGpa(float g)
//     {
//         gpa = g;
//         cout << "Enter A GPA in range of (0.0 --- 4.0): ";
//         float gpa1;
//         cin >> gpa1;
//         if (gpa1 >= 0.0 && gpa1 <= 4.0)
//         {
//             gpa = gpa1;
//         }
//         else
//             cout << "Invalid ! you Enter a invalid Range " << endl;
//     }

//     float getGpa() const
//     {
//         return gpa;
//     }
// };
// int main()
// {
//     Student s;
//     s.setName("Hamza");
//     s.setGpa(3.5);

//     cout << "Name of Student is " << s.getName() << endl;
//     cout << "Your Current GPA is " << s.getGpa();
//     return 0;
// }

// ------------------------------Task 08------------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class BankAccount
// {
// private:
//     int account_Number;
//     float balance;

// public:
//     void setBalance(float b)
//     {
//         // balance=b;
//         if (b > 0)
//         {
//             balance = b;
//         }
//         else
//             cout << "Invalid! , you Enter a -ve balance ";
//     }

//     float getBalance()
//     {
//         return balance;
//     }

//     float Deposit()
//     {
//         float deposit;
//         cout << "Enter a Rupees that you want deposit in Bank ";
//         cin >> deposit;
//         if (deposit > 0)
//         {
//             balance += deposit;
//         }
//         else
//         {
//             cout << "You enter a -ve Rupees " << endl;
//             return balance;
//         }
//         return balance;
//     }

//     float WithDrawals()
//     {
//         float with_draw;
//         cout << "Enter a Rupees that you want With Draw in Bank ";
//         cin >> with_draw;
//         if (with_draw <= balance)
//         {
//             balance -= with_draw;
//         }
//         else
//         {
//             cout << "Your With Draw is more than Balance " << endl;
//             return balance;
//         }

//         return balance;
//     }
// };
// int main()
// {

//     BankAccount B;
//     B.setBalance(2500);
//     cout << "Your Current Balance is " << B.getBalance() << endl;
//     float d = B.Deposit();
//     float w = B.WithDrawals();
//     cout << "your entire Balance After Deposit is " << d << endl;
//     cout << "Your Entire Balance After Balance is " << w << endl;
//     return 0;
// }
// -----------------------------Task 09----------------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Configure
// {
// private:
//     string key, value;

// public:
//     void setValue(string v)
//     {
//         value = v;
//     }

//     void setKey(string newkey)
//     {
//         key = newkey;
//     }

//     string getKey() const
//     {
//         return key;
//     }
// };
// int main()
// {
//     Configure c;
//     c.setKey("sensitive123");
//     cout << "Key : " << c.getKey();

//     c.setValue("abcd11223344");
//     return 0;
// }

// ----------------------------Task 10-----------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class Rectangle
// {
// private:
//     int len, width;

// public:
//     int setlenght(int l)
//     {
//         len = l;
//         return len;
//     }

//     int setwidth(int w)
//     {
//         width = w;
//         return width;
//     }

//     int getlenght()
//     {
//         return len;
//     }

//     int getwidth()
//     {
//         return width;
//     }

//     int calArea()
//     {
//         return len * width;
//     }
// };

// int main()
// {
//     Rectangle r;
//     r.setlenght(10);
//     r.setwidth(20);
//     int a = r.calArea();
//     cout << "Area of Rectangle is " << a;
//     return 0;
// }