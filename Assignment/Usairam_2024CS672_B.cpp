// Problem 1

// #include <iostream>
// #include <string>
// using namespace std;

// class student
// {
// private:
//     string name;
//     int id;
//     float cgpa;
//     char grade;
//     int year_of_birth;
//     int *marks;
//     int num_assignments;

// public:
//     student()
//     {
//         name = "NULL";
//         id = -1;
//         cgpa = 0.0;
//         grade = 'F';
//         year_of_birth = 0;
//         marks = NULL;
//         num_assignments = 0;
//     }
//     student(string n, int i, float c, char g, int y, int *m, int a)
//     {
//         name = n;
//         id = i;
//         cgpa = c;
//         grade = g;
//         year_of_birth = y;
//         num_assignments = a;
//         marks = new int[a];
//         for (int j = 0; j < a; j++)
//         {
//             marks[j] = m[j];
//         }
//     }
//     student(const student &obj)
//     {
//         name = obj.name;
//         id = obj.id;
//         cgpa = obj.cgpa;
//         grade = obj.grade;
//         year_of_birth = obj.year_of_birth;
//         num_assignments = obj.num_assignments;
//         marks = new int[num_assignments];
//         for (int i = 0; i < num_assignments; i++)
//         {
//             marks[i] = obj.marks[i];
//         }
//     }
//     void setname(string n)
//     {
//         name = n;
//     }
//     void setid(int i)
//     {
//         id = i;
//     }
//     void setcgpa(float c)
//     {
//         cgpa = c;
//     }
//     void setgrade(char g)
//     {
//         grade = g;
//     }
//     void setyear_of_birth(int y)
//     {
//         year_of_birth = y;
//     }
//     void setmarks(int *m, int a)
//     {
//         if (marks != NULL)
//         {
//             delete[] marks;
//         }
//         marks = new int[a];
//         num_assignments = a;
//         for (int j = 0; j < a; j++)
//         {
//             marks[j] = m[j];
//         }
//     }
//     string getname()
//     {
//         return name;
//     }
//     int getid()
//     {
//         return id;
//     }
//     float getcgpa()
//     {
//         return cgpa;
//     }
//     char getgrade()
//     {
//         return grade;
//     }
//     int getyear_of_birth()
//     {
//         return year_of_birth;
//     }
//     int *getmarks()
//     {
//         return marks;
//     }
//     int getnum_assignments()
//     {
//         return num_assignments;
//     }
//     void assigngrade()
//     {
//         int total = 0;
//         for (int i = 0; i < num_assignments; i++)
//         {
//             total += marks[i];
//         }
//         float avg = total / num_assignments;
//         if (avg >= 90)
//         {
//             grade = 'A';
//         }
//         else if (avg >= 80)
//         {
//             grade = 'B';
//         }
//         else if (avg >= 70)
//         {
//             grade = 'C';
//         }
//         else if (avg >= 60)
//         {
//             grade = 'D';
//         }
//         else
//         {
//             grade = 'F';
//         }
//     }
//     void displaymarks()
//     {
//         int min = marks[0];
//         int max = marks[0];
//         int total = 0;
//         for (int i = 0; i < num_assignments; i++)
//         {
//             if (marks[i] < min)
//             {
//                 min = marks[i];
//             }
//             if (marks[i] > max)
//             {
//                 max = marks[i];
//             }
//             total += marks[i];
//         }
//         float avg = total / num_assignments;
//         cout << "Minimum Marks: " << min << endl;
//         cout << "Maximum Marks: " << max << endl;
//         cout << "Average Marks: " << avg << endl;
//     }
//     student Topper(student s[], int n)
//     {
//         student top;
//         int max = 0;
//         for (int i = 0; i < n; i++)
//         {
//             int total = 0;
//             for (int j = 0; j < s[i].getnum_assignments(); j++)
//             {
//                 total += s[i].getmarks()[j];
//             }
//             if (total > max)
//             {
//                 max = total;
//                 top = s[i];
//             }
//         }
//         return top;
//     }
//     void Sort(student s[], int n, string type)
//     {
//         if (type == "name")
//         {
//             for (int i = 0; i < n - 1; i++)
//             {
//                 for (int j = 0; j < n - i - 1; j++)
//                 {
//                     if (s[j].getname() > s[j + 1].getname())
//                     {
//                         student temp = s[j];
//                         s[j] = s[j + 1];
//                         s[j + 1] = temp;
//                     }
//                 }
//             }
//         }
//         else if (type == "id")
//         {
//             for (int i = 0; i < n - 1; i++)
//             {
//                 for (int j = 0; j < n - i - 1; j++)
//                 {
//                     if (s[j].getid() > s[j + 1].getid())
//                     {
//                         student temp = s[j];
//                         s[j] = s[j + 1];
//                         s[j + 1] = temp;
//                     }
//                 }
//             }
//         }
//         else if (type == "marks")
//         {
//             for (int i = 0; i < n - 1; i++)
//             {
//                 for (int j = 0; j < n - i - 1; j++)
//                 {
//                     int total1 = 0;
//                     for (int k = 0; k < s[j].getnum_assignments(); k++)
//                     {
//                         total1 += s[j].getmarks()[k];
//                     }
//                     int total2 = 0;
//                     for (int k = 0; k < s[j + 1].getnum_assignments(); k++)
//                     {
//                         total2 += s[j + 1].getmarks()[k];
//                     }
//                     if (total1 > total2)
//                     {
//                         student temp = s[j];
//                         s[j] = s[j + 1];
//                         s[j + 1] = temp;
//                     }
//                 }
//             }
//         }
//     }
//     void InputStudents(student s[], int n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cin.ignore();
//             cout << "Enter Student Name: ";
//             string n_ame;
//             getline(cin, n_ame);
//             s[i].setname(n_ame);

//             cout << "Enter Student ID: ";
//             int i_d;
//             cin >> i_d;
//             s[i].setid(i_d);

//             cout << "Enter Student CGPA: ";
//             float c_gpa;
//             cin >> c_gpa;
//             s[i].setcgpa(c_gpa);

//             cout << "Enter Student Grade: ";
//             char g_rade;
//             cin >> g_rade;
//             s[i].setgrade(g_rade);

//             cout << "Enter Student Year Of Birth: ";
//             int y_ear;
//             cin >> y_ear;
//             s[i].setyear_of_birth(y_ear);

//             cout << "Enter Number Of Assignments: ";
//             int num_marks;
//             cin >> num_marks;

//             int *m_arks = new int[num_marks];
//             for (int j = 0; j < num_marks; j++)
//             {
//                 cout << "Enter Marks For Assignment " << j + 1 << ": ";
//                 cin >> m_arks[j];
//             }
//             s[i].setmarks(m_arks, num_marks);
//             delete[] m_arks;

//             cout << endl;
//         }
//     }

//     void DisplayStudents(student s[], int n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cout << "Student Details:" << endl;
//             cout << "-------------------------" << endl;
//             cout << "Student Name: " << s[i].getname() << endl;
//             cout << "Student ID: " << s[i].getid() << endl;
//             cout << "Student CGPA: " << s[i].getcgpa() << endl;
//             cout << "Student Grade: " << s[i].getgrade() << endl;
//             cout << "Student Year Of Birth: " << s[i].getyear_of_birth() << endl;
//             cout << "Student Marks: ";
//             for (int j = 0; j < s[i].getnum_assignments(); j++)
//             {
//                 cout << s[i].getmarks()[j] << " ";
//             }
//             cout << endl;
//             cout << "-------------------------" << endl
//                  << endl;
//         }
//     }
//     ~student()
//     {
//         delete[] marks;
//     }
// };

// int main()
// {
//     student *s;
//     int i;
//     cout << "How Many Students Do You Wish To Store? ";
//     cin >> i;
//     s = new student[i];
//     s->InputStudents(s, i);
//     s->DisplayStudents(s, i);
//     s->Sort(s, i, "name");
//     cout << "Students Sorted By Name:" << endl;
//     s->DisplayStudents(s, i);
//     s->Sort(s, i, "id");
//     cout << "Students Sorted By ID:" << endl;
//     s->DisplayStudents(s, i);
//     s->Sort(s, i, "marks");
//     cout << "Students Sorted By Marks:" << endl;
//     s->DisplayStudents(s, i);
//     student top = s->Topper(s, i);
//     cout << "The Topper Is: " << top.getname() << endl;
//     delete[] s;
//     return 0;
// }

// // Problem 2

// #include <iostream>
// using namespace std;

// class product
// {
// private:
//     string item_name;
//     int item_num;
//     float item_price;
//     int item_stock;

// public:
//     product()
//     {
//         item_name = "NULL";
//         item_num = -1;
//         item_price = 0.0;
//         item_stock = 0;
//     }
//     product(string n, int i, float p, int s)
//     {
//         item_name = n;
//         item_num = i;
//         item_price = p;
//         item_stock = s;
//     }
//     product(const product &obj)
//     {
//         item_name = obj.item_name;
//         item_num = obj.item_num;
//         item_price = obj.item_price;
//         item_stock = obj.item_stock;
//     }
//     void setitem_name(string n)
//     {
//         item_name = n;
//     }
//     void setitem_num(int i)
//     {
//         item_num = i;
//     }
//     void setitem_price(float p)
//     {
//         item_price = p;
//     }
//     void setitem_stock(int s)
//     {
//         item_stock = s;
//     }
//     string getitem_name()
//     {
//         return item_name;
//     }
//     int getitem_num()
//     {
//         return item_num;
//     }
//     float getitem_price()
//     {
//         return item_price;
//     }
//     int getitem_stock()
//     {
//         return item_stock;
//     }
//     void InputProducts(product p[], int n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             string n_ame;
//             int i_d;
//             float p_rice;
//             int s_tock;
//             cout << "Enter Item Name: ";
//             cin.ignore();
//             getline(cin, n_ame);
//             cout << "Enter Item Number: ";
//             cin >> i_d;
//             cout << "Enter Item Price: ";
//             cin >> p_rice;
//             cout << "Enter Item Stock: ";
//             cin >> s_tock;
//             p[i] = product(n_ame, i_d, p_rice, s_tock);
//             cout << endl;
//         }
//     }
//     void DisplayProduct(product p[], int n)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "Product Details:" << endl;
//             cout << "-------------------------" << endl;
//             cout << "Item Name: " << p[j].getitem_name() << endl;
//             cout << "Item Number: " << p[j].getitem_num() << endl;
//             cout << "Item Price: " << p[j].getitem_price() << endl;
//             cout << "Item Stock: " << p[j].getitem_stock() << endl;
//             cout << "-------------------------" << endl
//                  << endl;
//         }
//     }
//     product MostExpensive(product p[], int n)
//     {
//         product top;
//         float max = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (p[i].getitem_price() > max)
//             {
//                 max = p[i].getitem_price();
//                 top = p[i];
//             }
//         }
//         return top;
//     }
//     void BuyProduct(product p[], int n)
//     {
//         int num;
//         cout << "Enter The Item Number You Want To Buy: ";
//         cin >> num;
//         for (int i = 0; i < n; i++)
//         {
//             if (p[i].getitem_num() == num)
//             {
//                 if (p[i].getitem_stock() > 0)
//                 {
//                     cout << "You Have Bought " << p[i].getitem_name() << " For Rs." << p[i].getitem_price() << endl;
//                     p[i].setitem_stock(p[i].getitem_stock() - 1);
//                     cout << "Remaining Stock: " << p[i].getitem_stock() << endl;
//                 }
//                 else
//                 {
//                     cout << "Sorry! The Stock For " << p[i].getitem_name() << " Is Empty." << endl;
//                 }
//             }
//         }
//     }
// };

// void searchproducts(product p[], int n, string name)
// {
//     bool found = false;
//     for (int i = 0; i < n; i++)
//     {
//         if (p[i].getitem_name() == name)
//         {
//             cout << "Product Found:" << endl;
//             cout << "Item Name: " << p[i].getitem_name() << endl;
//             cout << "Item Number: " << p[i].getitem_num() << endl;
//             cout << "Item Price: " << p[i].getitem_price() << endl;
//             cout << "Item Stock: " << p[i].getitem_stock() << endl;
//             found = true;
//             break;
//         }
//     }
//     if (!found)
//     {
//         cout << "Product Not Found." << endl;
//     }
// }

// int main()
// {
//     product *p;
//     int i;
//     cout << "How Many Products Do You Wish To Store? ";
//     cin >> i;
//     p = new product[i];
//     p->InputProducts(p, i);
//     p->DisplayProduct(p, i);
//     product top = p->MostExpensive(p, i);
//     cout << "The Most Expensive Product Is: " << top.getitem_name() << endl;

//     string search_name;
//     cout << "Enter The Name Of The Product You Want To Search: ";
//     cin.ignore();
//     getline(cin, search_name);
//     searchproducts(p, i, search_name);

//     p->BuyProduct(p, i);
//     delete[] p;
//     return 0;
// }

// // Problem 3

// #include <iostream>
// using namespace std;

// class ArrayADT
// {
// private:
//     int *arr;
//     int size;
//     int capacity;

// public:
//     ArrayADT(int c)
//     {
//         capacity = c;
//         size = 0;
//         arr = new int[capacity];
//     }
//     void InsertBegin(int value)
//     {
//         if (size < capacity)
//         {
//             for (int i = size; i > 0; i--)
//             {
//                 arr[i] = arr[i - 1];
//             }
//             arr[0] = value;
//             size++;
//         }
//         else
//         {
//             cout << "Array Is Full." << endl;
//         }
//     }
//     void InsertLast(int value)
//     {
//         if (size < capacity)
//         {
//             arr[size] = value;
//             size++;
//         }
//         else
//         {
//             cout << "Array Is Full." << endl;
//         }
//     }
//     void Remove(int value)
//     {
//         int index = -1;
//         for (int i = 0; i < size; i++)
//         {
//             if (arr[i] == value)
//             {
//                 index = i;
//                 break;
//             }
//         }
//         if (index != -1)
//         {
//             for (int i = index; i < size - 1; i++)
//             {
//                 arr[i] = arr[i + 1];
//             }
//             size--;
//         }
//         else
//         {
//             cout << "Value Not Found." << endl;
//         }
//     }
//     void Removeall(int value)
//     {
//         int index = -1;
//         for (int i = 0; i < size; i++)
//         {
//             if (arr[i] == value)
//             {
//                 index = i;
//                 for (int j = index; j < size - 1; j++)
//                 {
//                     arr[j] = arr[j + 1];
//                 }
//                 size--;
//                 i--;
//             }
//         }
//         if (index == -1)
//         {
//             cout << "Value Not Found." << endl;
//         }
//     }
//     void Display()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
//     void Update(int index, int value)
//     {
//         if (index >= 0 && index < size)
//         {
//             arr[index] = value;
//         }
//         else
//         {
//             cout << "Invalid Index." << endl;
//         }
//     }
//     void Search(int value)
//     {
//         int index = -1;
//         for (int i = 0; i < size; i++)
//         {
//             if (arr[i] == value)
//             {
//                 index = i;
//                 break;
//             }
//         }
//         if (index != -1)
//         {
//             cout << "Value Found At Index " << index << "." << endl;
//         }
//         else
//         {
//             cout << "Value Not Found." << endl;
//         }
//     }
//     void Index_at(int index)
//     {
//         if (index >= 0 && index < size)
//         {
//             cout << "Value At Index " << index << " Is " << arr[index] << "." << endl;
//         }
//         else
//         {
//             cout << "Invalid Index." << endl;
//         }
//     }
//     void Sortlist()
//     {
//         for (int i = 0; i < size - 1; i++)
//         {
//             for (int j = 0; j < size - i - 1; j++)
//             {
//                 if (arr[j] > arr[j + 1])
//                 {
//                     int temp = arr[j];
//                     arr[j] = arr[j + 1];
//                     arr[j + 1] = temp;
//                 }
//             }
//         }
//     }
//     void Copylist(ArrayADT &obj)
//     {
//         obj.size = size;
//         for (int i = 0; i < size; i++)
//         {
//             obj.arr[i] = arr[i];
//         }
//     }
// void Copylist(ArrayADT &obj)
// {
//     obj.size = size;
//     for (int i = 0; i < size; i++)
//     {
//         obj.arr[i] = arr[i];
//     }
// }
// int Sum()
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }
//     void Empty()
//     {
//         size = 0;
//     }
//     ArrayADT Addlist(ArrayADT &obj)
//     {
//         ArrayADT temp(size + obj.size);
//         for (int i = 0; i < size; i++)
//         {
//             temp.arr[i] = arr[i];
//         }
//         for (int i = 0; i < obj.size; i++)
//         {
//             temp.arr[size + i] = obj.arr[i];
//         }
//         temp.size = size + obj.size;
//         return temp;
//     }
//     void Removeduplicate()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             for (int j = i + 1; j < size; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     for (int k = j; k < size - 1; k++)
//                     {
//                         arr[k] = arr[k + 1];
//                     }
//                     size--;
//                     j--;
//                 }
//             }
//         }
//     }
//     ~ArrayADT()
//     {
//         delete[] arr;
//     }
// };

// int main()
// {
//     ArrayADT a(10);
//     a.InsertBegin(10);
//     a.InsertBegin(20);
//     a.InsertBegin(30);
//     a.InsertLast(40);
//     a.InsertLast(50);
//     a.InsertLast(60);
//     a.Display();
//     a.Remove(30);
//     a.Display();
//     a.Removeall(40);
//     a.Display();
//     a.Update(2, 70);
//     a.Display();
//     a.Search(50);
//     a.Index_at(2);  
//     a.Sortlist();
//     a.Display();
//     ArrayADT b(10);
//     a.Copylist(b);
//     b.Display();
//     cout << "Sum Of List A: " << a.Sum() << endl;
//     cout << "Sum Of List B: " << b.Sum() << endl;
//     a.Empty();
//     a.Display();
//     ArrayADT c = a.Addlist(b);
//     c.Display();
//     c.Removeduplicate();
//     c.Display();
//     return 0;
// }




// Problem 4



 
#include <iostream>
#include <string>
using namespace std;

class STRING
{
private:
    char *str;
    int size;

public:

    STRING()
    {
        size = 0;
        str = new char[size + 1];
        str[size] = '\0';
    }
    STRING(string s)
    {
        size = s.length();
        str = new char[size + 1];
        for (int i = 0; i < size; i++)
        {
            str[i] = s[i];
        }
        str[size] = '\0';
    }
    STRING(const STRING &obj)
    {
        size = obj.size;
        str = new char[size + 1];
        for (int i = 0; i < size; i++)
        {
            str[i] = obj.str[i];
        }
        str[size] = '\0';
    }
    void setstr(string s)
    {
        size = s.length();
        str = new char[size + 1];
        for (int i = 0; i < size; i++)
        {
            str[i] = s[i];
        }
        str[size] = '\0';
    }
    string getstr()
    {
        string s = "";
        for (int i = 0; i < size; i++)
        {
            s += str[i];
        }
        return s;
    }
    void Insert(char c)
    {
        char *temp = new char[size + 2];
        for (int i = 0; i < size; i++)
        {
            temp[i] = str[i];
        }
        temp[size] = c;
        temp[size + 1] = '\0';
        delete[] str;
        str = temp;
        size++;
    }
    int Length()
    {
        return size;
    }
    void Reverse()
    {
        for (int i = 0; i < size / 2; i++)
        {
            char temp = str[i];
            str[i] = str[size - i - 1];
            str[size - i - 1] = temp;
        }
    }
    void Concatenate(STRING s)
    {
        char *temp = new char[size + s.size + 1];
        for (int i = 0; i < size; i++)
        {
            temp[i] = str[i];
        }
        for (int i = 0; i < s.size; i++)
        {
            temp[size + i] = s.str[i];
        }
        temp[size + s.size] = '\0';
        delete[] str;
        str = temp;
        size += s.size;
    }
    STRING Copy()
    {
        STRING temp;
        temp.size = size;
        temp.str = new char[size + 1];
        for (int i = 0; i < size; i++)
        {
            temp.str[i] = str[i];
        }
        temp.str[size] = '\0';
        return temp;
    }
    ~STRING()
    {
        delete[] str;
    }
};

int main()
{
    STRING s1("Hello");
    cout << "Original String: " << s1.getstr() << endl;
    s1.Insert(' ');
    s1.Insert('W');
    s1.Insert('o');
    s1.Insert('r');
    s1.Insert('l');
    s1.Insert('d');
    cout << "String After Insertion: " << s1.getstr() << endl;
    cout << "Length Of String: " << s1.Length() << endl;
    s1.Reverse();
    cout << "String After Reversal: " << s1.getstr() << endl;
    STRING s2("!");
    s1.Concatenate(s2);
    cout << "String After Concatenation: " << s1.getstr() << endl;
    STRING s3 = s1.Copy();
    cout << "Copied String: " << s3.getstr() << endl;
    return 0;
}