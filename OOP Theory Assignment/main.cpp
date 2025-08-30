#include"product.h"
// #include"student.h"
// #include"List.h"
// #include"String.h"

int main()
{
    // ------------------problem 01-------------


    
        // int count;
        // cout << "Enter a Number of StUdents ";
        // cin >> count;
    
        // Student *student = new Student[count];
    
        // inputStudents(count, student);
        // Dispaly(count, student);
    
        // Topper(count, student);
    
        // cout << "Student Sorted With their ID's " << endl;
        // Sort(count, student);
        // Dispaly(count, student);
        // return 0;



    // ------------------Problem 02--------------

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

    
// ------------------problem 03--------------
    // ADT list;
    // list.InsertBegin(4);
    // list.display();
    // list.InsertLast(5);
    // list.display();
    // list.Remove();
    // list.display();
    // list.RemoveAll(3);
    // list.display();
    // list.Update(2, 10);
    // list.display();
    // list.Search(10);
    // list.Index_at(2);
    // list.SortList();
    // list.display();
    // ADT Newlist(list);
    // Newlist.display();
    // list.Sum();
    // list.Empty();
    // list.display();
    // ADT Addlist;
    // Addlist.addlist(list, Newlist);
    // Addlist.display();
    // list.display();
    // list.RemoveDublicate();
    // return 0;

// ----------------------Problem 04----------------

    // STRING s1("Hello");
    // cout << "Original String: " << s1.getstr() << endl;
    // s1.Insert(' ');
    // s1.Insert('W');
    // s1.Insert('o');
    // s1.Insert('r');
    // s1.Insert('l');
    // s1.Insert('d');
    // cout << "String After Insertion: " << s1.getstr() << endl;
    // cout << "Length Of String: " << s1.Length() << endl;
    // s1.Reverse();
    // cout << "String After Reversal: " << s1.getstr() << endl;
    // STRING s2("!");
    // s1.Concatenate(s2);
    // cout << "String After Concatenation: " << s1.getstr() << endl;
    // STRING s3 = s1.Copy();
    // cout << "Copied String: " << s3.getstr() << endl;
    // return 0;
}
