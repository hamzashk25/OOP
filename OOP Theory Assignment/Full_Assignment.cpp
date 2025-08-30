// ----------------------OOP Theory Assignment---------------
// ---------------------------Problem 01---------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Student
// {
// private:
//     string name, grade;
//     int ID, year_of_Birth;
//     float cgpa;
//     int *marks;
//     int Assign_Nmb;

// public:
//     int min;
//     int max = 0;
//     int avg;
//     int sum = 0;

//     Student(string, int, int, float, int);
//     Student(Student &obj, string n, int id);
//     void setter(string n, int id, int m, int Year, float c);
//     void setgrade();
//     void display();
//     ~Student();

//     string getname() { return name; }

//     string getGrade() { return grade; }

//     int getId() { return ID; }

//     // int getMarks() { return marks;}

//     int getYear_of_Birth() { return year_of_Birth; }

//     float getCgpa() { return cgpa; }

// };

// Student::Student(string n = "hamza", int id = 78, int Year = 2006, float c = 3.2, int assign = 3)
// {
//     name = n;
//     ID = id;
//     year_of_Birth = Year;
//     cgpa = c;
//     Assign_Nmb = assign;
//     marks = new int[assign];

//     for (int i = 0; i < assign; i++)
//     {
//         cout << "Assignment " << i + 1 << " marks : ";
//         cin >> marks[i];
//         sum += marks[i];
//     }

//     for (int i = 0; i < assign; i++)
//     {
//         if (marks[i] > max)
//         {
//             max = marks[i];
//         }
//     }

//     min = marks[0];
//     for (int i = 0; i < assign; i++)
//     {
//         if (marks[i] < min)
//         {
//             min = marks[i];
//         }
//     }

//     avg = sum / assign;

//     setgrade();
// }

// Student ::Student(Student &obj, string n, int id)
// {

//     name = n;
//     ID = id;
//     year_of_Birth = obj.year_of_Birth;
//     cgpa = obj.cgpa;
//     grade = obj.grade;
//     Assign_Nmb = obj.Assign_Nmb;

//     marks = new int[Assign_Nmb];
//     avg = obj.avg;
//     max = obj.max;
//     min = obj.min;
//     avg = obj.avg;
// }

// void Student::setter(string n, int id, int m, int Year, float c)
// {
//     name = n;
//     ID = id;
//     year_of_Birth = Year;
//     cgpa = c;
// }

// void Student::setgrade()
// {

//     if (avg >= 90)
//     {
//         grade = "A+";
//         cgpa = 4.0;
//     }
//     else if (avg >= 80)
//     {
//         grade = "A";
//         cgpa = 3.8;
//     }
//     else if (avg >= 70)
//     {
//         grade = "A-";
//         cgpa = 3.6;
//     }
//     else if (avg >= 60)
//     {
//         grade = "B+";
//         cgpa = 3.2;
//     }
//     else if (avg >= 50)
//     {
//         grade = "B";
//         cgpa = 3.0;
//     }
//     else if (avg >= 40)
//     {
//         grade = "B-";
//         cgpa = 2.8;
//     }
//     else
//     {
//         grade = "F";
//         cgpa = 2.0;
//     };
// }

// void Student::display()
// {
//     cout << "Name " << name << endl;
//     cout << "Year Of Birth " << year_of_Birth << endl;
//     cout << "Student ID " << ID << endl;
//     cout << "Maximum Marks " << max << endl;
//     cout << "Minimum Marks " << min << endl;
//     cout << "Average Marks " << avg << endl;
//     cout << "Grade " << grade << endl;
//     cout << "CGPA " << cgpa << endl;
//     cout << endl;
// }

// Student::~Student()
// {
//     cout << "Destructor Invoked " << name << endl;
//     delete[] marks;
// }

// void inputStudents(int count, Student student[])
// {
//     for (int i = 0; i < count; i++)
//     {
//         string name;
//         int id, year, assign;
//         float cgpa;

//         cout << "Enter details for Student " << i + 1 << endl;
//         cout << "Name: ";
//         cin >> name;
//         cout << "ID: ";
//         cin >> id;
//         cout << "Year of Birth: ";
//         cin >> year;
//         cout << "CGPA: ";
//         cin >> cgpa;
//         cout << "Number of Assignments: ";
//         cin >> assign;

//         student[i] = Student(name, id, year, cgpa, assign);
//     }
// }
// void Dispaly(int count, Student student[])
// {
//     for (int i = 0; i < count; i++)
//     {
//         cout << "Student " << i + 1 << " Information " << endl;
//         student[i].display();
//     }
// }

// void Topper(int count, Student student[])
// {
//     int topper = student[0].avg;
//     int maxIndex = 0;
//     for (int i = 0; i < count; i++)
//     {
//         if (student[i].avg > student[maxIndex].avg)
//         {
//             maxIndex = i;
//         }
//     }
//     cout << "Topper of Student is " << endl;
//     student[maxIndex].display();
// }

// void Sort(int count, Student student[])
// {
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = 0; j < count - 1; j++)
//         {
//             if (student[j].getId() > student[j + 1].getId())
//             {
//                 Student temp = student[j];
//                 student[j] = student[j + 1];
//                 student[j + 1] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int count;
//     cout << "Enter a Number of StUdents ";
//     cin >> count;

//     Student *student = new Student[count];

//     inputStudents(count, student);
//     Dispaly(count, student);

//     Topper(count, student);

//     cout << "Student Sorted With their ID's " << endl;
//     Sort(count, student);
//     Dispaly(count, student);
//     return 0;
// }

// -----------------------Problem 02------------------
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Product{
public:
    string item_name;
    int item_num, item_price, item_stock;

    Product()
    {
        item_name = "pen";
        item_num = 02;
        item_price = 50;
        item_stock = 100;
    }

    Product(string n, int id, int p, int s)
    {
        item_name = n;
        item_num = id;
        item_price = p;
        item_stock = s;
    }

    Product(Product &obj)
    {
        item_name = obj.item_name;
        item_num = obj.item_num;
        item_price = obj.item_price;
        item_stock = obj.item_stock;
    }
};

void inputProduct(int add, Product p[])
{
    for (int i = 0; i < add; i++)
    {
        cout << "Enter a Product " << i + 1 << " Name ";
        cin >> p[i].item_name;
        cout << "Enter a product " << i + 1 << " ID ";
        cin >> p[i].item_num;
        cout << "Enter a Product " << i + 1 << " Price ";
        cin >> p[i].item_price;
        cout << "Enter a Product " << i + 1 << " Stock ";
        cin >> p[i].item_stock;
        cout << endl;
    }
}

void Display(int add, Product p[])
{
    cout << endl;
    for (int i = 0; i < add; i++)
    {
        cout << "Name of Product " << i + 1 << " is " << p[i].item_name << endl;
        cout << "ID Of Product " << i + 1 << " is " << p[i].item_num << endl;
        cout << "Price Of Product " << i + 1 << " is " << p[i].item_price << endl;
        cout << "Stock of Product " << i + 1 << " is " << p[i].item_stock << endl;
        cout << endl;
    }
}

void SearchProduct(int add, Product p[])
{
    string search;
    cout << "Enter a Name of Product that you want to search ";
    cin >> search;
    for (int i = 0; i < add; i++)
    {
        if (search == p[i].item_name)
        {
            cout << "Name of Product " << i + 1 << " is " << p[i].item_name << endl;
            cout << "Number Of Product " << i + 1 << " is " << p[i].item_num << endl;
            cout << "Price Of Product " << i + 1 << " is " << p[i].item_price << endl;
            cout << "Stock of Product " << i + 1 << " is " << p[i].item_stock << endl;
            cout << endl;
        }
    }
}

string ExpensiveItem(int add, Product p[])
{
    int exp = p[0].item_price;
    string exp_Pro_Name;
    for (int i = 0; i < add; i++)
    {
        if (exp < p[i].item_price)
        {
            exp = p[i].item_price;
            exp_Pro_Name = p[i].item_name;
        }
    }
    return exp_Pro_Name;
}

void BuyProduct(int add, Product p[])
{
    int total = 0, stock, quantity;
    string buy;
    cout << "Enter a name of Product That you Want To Buy ";
    cin >> buy;
    cout << "Enter a Quantity ";
    cin >> quantity;

    for (int i = 0; i < add; i++)
    {
        if (buy == p[i].item_name)
        {
            if (quantity > p[i].item_stock)
                cout << "Quantity is not more available ";
            else
            {
                total = p[i].item_price * quantity;
                p[i].item_stock -= quantity;
            }
        }
        else
            cout << "Item Not Available ! ";
        cout << "Total of Product " <<p[i].item_name<<" is "<< total << endl;
    }
}

int main()
{
    int addProduct;
    cout << "Enter a Products Quantity that you want Add ";
    cin >> addProduct;

    Product *product = new Product[addProduct];

    inputProduct(addProduct, product);
    SearchProduct(addProduct, product);
    cout<<"Most Expensive Product is "<<ExpensiveItem(addProduct, product)<<endl;
    cout<<"Products Detail Before Sell "<<endl;
    Display(addProduct, product);
    BuyProduct(addProduct, product);
    Display(addProduct, product);
    delete[] product;
    return 0;
}

// --------------------------Problem 03-----------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class ADT
// {
// private:
//     int arr[100] = {1, 1, 3};
//     int size;

// public:
//     ADT()
//     {
//         size = 3;
//     }
//     void InsertBegin(int);
//     void InsertLast(int);
//     void Remove();
//     void display();
//     void RemoveAll(int);
//     void Update(int index, int value);
//     void Search(int);
//     void Index_at(int);
//     void SortList();
//     // void CopyList();
//     ADT(ADT &);
//     void Sum();
//     void Empty();
//     void addlist(ADT &, ADT &);
//     void RemoveDublicate();
// };

// void ADT::InsertBegin(int value)
// {
//     for (int i = size; i > 0; --i)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = value;
//     size++;
// }

// void ADT::InsertLast(int value)
// {
//     arr[size++] = value;
// }

// void ADT ::Remove()
// {
//     size--;
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
// }

// void ADT ::RemoveAll(int value)
// {
//     int newsize = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] != value)
//         {
//             arr[newsize++] = arr[i];
//         }
//     }
//     size = newsize;
// }

// void ADT ::Search(int value)
// {
//     int newsize = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == value)
//         {
//             cout << "Value " << value << " is at index of " << i << endl;
//         }
//     }
// }

// void ADT ::Index_at(int index)
// {
//     if (index >= 0 && index < size)
//         cout << "Value at index " << index << " is " << arr[index] << endl;
//     else
//         cout << "Invalid Index !";
// }

// void ADT::SortList()
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// ADT::ADT(ADT &newlist)
// {

//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = newlist.arr[i];
//     }

//     // newlist.display();
// }

// void ADT::Update(int index, int value)
// {
//     arr[index] = value;
// }

// void ADT ::Sum()
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }

//     cout << "Sum of Array is " << sum << endl;
// }

// void ADT::Empty()
// {
//     for (int i = 0; i < size; i++)
//     {
//     }
// }

// void ADT::addlist(ADT &list, ADT &newlist)
// {
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = list.arr[i] + newlist.arr[i];
//     }
// }

// void ADT ::RemoveDublicate()
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i+1; j < size - 1; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 arr[i] = -1;
//             }
//         }
//     }

//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]!=-1)
//         {
//             cout<<arr[i]<<" ";
//         }
//     }
// }

// void ADT ::display()
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     ADT list;
//     list.InsertBegin(4);
//     list.display();
//     list.InsertLast(5);
//     list.display();
//     list.Remove();
//     list.display();
//     list.RemoveAll(3);
//     list.display();
//     list.Update(2, 10);
//     list.display();
//     list.Search(10);
//     list.Index_at(2);
//     list.SortList();
//     list.display();
//     ADT Newlist(list);
//     Newlist.display();
//     list.Sum();
//     list.Empty();
//     list.display();
//     ADT Addlist;
//     Addlist.addlist(list, Newlist);
//     Addlist.display();
//     list.display();
//     list.RemoveDublicate();
//     return 0;
// }

// ------------------Problem 04-----------------
// #include <iostream>
// #include <string>
// using namespace std;

// class STRING
// {
// private:
//     char *str;
//     int size;

// public:
//     STRING()
//     {
//         size = 0;
//         str = new char[size + 1];
//         str[size] = '\0';
//     }
//     STRING(string s)
//     {
//         size = s.length();
//         str = new char[size + 1];
//         for (int i = 0; i < size; i++)
//         {
//             str[i] = s[i];
//         }
//         str[size] = '\0';
//     }
//     STRING(const STRING &obj)
//     {
//         size = obj.size;
//         str = new char[size + 1];
//         for (int i = 0; i < size; i++)
//         {
//             str[i] = obj.str[i];
//         }
//         str[size] = '\0';
//     }
//     void setstr(string s)
//     {
//         size = s.length();
//         str = new char[size + 1];
//         for (int i = 0; i < size; i++)
//         {
//             str[i] = s[i];
//         }
//         str[size] = '\0';
//     }
//     string getstr()
//     {
//         string s = "";
//         for (int i = 0; i < size; i++)
//         {
//             s += str[i];
//         }
//         return s;
//     }
//     void Insert(char c)
//     {
//         char *temp = new char[size + 2];
//         for (int i = 0; i < size; i++)
//         {
//             temp[i] = str[i];
//         }
//         temp[size] = c;
//         temp[size + 1] = '\0';
//         delete[] str;
//         str = temp;
//         size++;
//     }
//     int Length()
//     {
//         return size;
//     }
//     void Reverse()
//     {
//         for (int i = 0; i < size / 2; i++)
//         {
//             char temp = str[i];
//             str[i] = str[size - i - 1];
//             str[size - i - 1] = temp;
//         }
//     }
//     void Concatenate(STRING s)
//     {
//         char *temp = new char[size + s.size + 1];
//         for (int i = 0; i < size; i++)
//         {
//             temp[i] = str[i];
//         }
//         for (int i = 0; i < s.size; i++)
//         {
//             temp[size + i] = s.str[i];
//         }
//         temp[size + s.size] = '\0';
//         delete[] str;
//         str = temp;
//         size += s.size;
//     }
//     STRING Copy()
//     {
//         STRING temp;
//         temp.size = size;
//         temp.str = new char[size + 1];
//         for (int i = 0; i < size; i++)
//         {
//             temp.str[i] = str[i];
//         }
//         temp.str[size] = '\0';
//         return temp;
//     }
//     ~STRING()
//     {
//         delete[] str;
//     }
// };

// int main()
// {
//     STRING s1("Hello");
//     cout << "Original String: " << s1.getstr() << endl;
//     s1.Insert(' ');
//     s1.Insert('W');
//     s1.Insert('o');
//     s1.Insert('r');
//     s1.Insert('l');
//     s1.Insert('d');
//     cout << "String After Insertion: " << s1.getstr() << endl;
//     cout << "Length Of String: " << s1.Length() << endl;
//     s1.Reverse();
//     cout << "String After Reversal: " << s1.getstr() << endl;
//     STRING s2("!");
//     s1.Concatenate(s2);
//     cout << "String After Concatenation: " << s1.getstr() << endl;
//     STRING s3 = s1.Copy();
//     cout << "Copied String: " << s3.getstr() << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class String{
// private:
//     char *str;
//     int size;

// public:
//     String()
//     {
//         size = 0;
//         str = new char[size + 1];
//         str[size++] = '\0';
//     }

//     String(string s)
//     {
//         size = s.length();
//         str = new char[size + 1];
//         int i;
//         for (i = 0; i < size; i++)
//         {
//             str[i] = s[i];
//         }
//         str[i] = '\0';
//     }

//     string getString()
//     {
//         return str;
//     }

//     void Insert(char *c)
//     {
//         c=new char[0];
//         str[size++] = *c;
//     }
// };
// int main()
// {

//     String S1("Hello");
//     cout << "Original String is " << S1.getString() << endl;

//     S1.Insert(" ");
//     S1.Insert("w");
//     S1.Insert("o");
//     S1.Insert("r");
//     S1.Insert("l");
//     S1.Insert("d");

//     cout<<S1.getString();
//     return 0;
// }