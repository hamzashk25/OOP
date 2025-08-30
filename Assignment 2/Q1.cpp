#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

const int MAX_CUSTOMERS = 10;
const int MAX_ORDERS = 10;
const int MAX_ITEMS = 10;
class Item
{
private:
    string name;
    string description;
    float price;
    int quantity;

public:
    Item()
    {
        name = "pen";
        description = "Smooth";
        price = 10;
        quantity = 2;
        // cout << "Item Default Constructor " << endl;
    }
    Item(string n, string d, float p, int q)
    {
        name = n;
        description = d;
        price = p;
        quantity = q;
        // cout << "Item Parametrized Constructor " << endl;
    }

    int getpriceforQuantity()
    {
        return price * quantity;
    }

    void Display()
    {
        cout << name << " " << description << " " << price << " " << quantity << endl;
    }
    ~Item()
    {
        // cout << "Item destructor " << endl;
    }
};

class Order
{
private:
    string date;
    bool status;
    Item *item;
    int itemcount;
    int max_items;

public:
    Order()
    {
        // cout << "order default Constructor " << endl;
    }

    Order(string date)
    {
        this->date = date;
        itemcount = 0;
        status = false;
        max_items = MAX_ITEMS;
        item = new Item[max_items];
        // cout << "order parametrized Constructor " << endl;
    }

    void addItem(Item &i)
    {
        if (itemcount < max_items)
        {
            item[itemcount++] = i;
        }
        else
        {
            cout << "Max items limit reached" << endl;
        }
    }
    int calcTax()
    {
        return CalcTotal() * 0.1;
    }

    float CalcTotal()
    {
        float total = 0;
        for (int i = 0; i < itemcount; i++)
        {
            total += item[i].getpriceforQuantity();
        }
        return total;
    }

    void Display()
    {
        cout << "Date of Order " << date << endl;
        for (int i = 0; i < itemcount; i++)
        {
            item[i].Display();
        }
    }
    ~Order()
    {
        delete[] item;
        // cout << "order destructor " << endl;
    }
};

class Customer
{
private:
    string name;
    string Address;
    

public:
    Order order[MAX_ORDERS];
    int ordercount = 0;
    Customer(string n, string a)
    {
        name = n;
        Address = a;
    }
    string getName()
    {
        return name;
    }

    void Add_Order(Order &temp_o)
    {

        order[ordercount++] = temp_o;
    }

    void Display()
    {
        cout << "Customer Name " << name << " " << Address << endl;
        for (int i = 0; i < ordercount; i++)
        {
            order[i].Display();
        }
    }
};

class Mart
{
private:
    string name;
    Customer *customerlist[10];
    int countcustomer = 0;

public:
    Mart(string name)
    {
        this->name = name;
    }

    void AddCustomer(Customer *c)
    {
        if (countcustomer < MAX_CUSTOMERS)
        {
            customerlist[countcustomer++] = c;
        }
        else
        {
            cout << "Max customers limit reached" << endl;
        }
    }

    int TotalSale()
    {
        int total = 0;
        for (int i = 0; i < countcustomer; i++)
        {
            Customer *c = customerlist[i];
            for (int j = 0; j < c->ordercount; j++) // Use ordercount instead
            {
                total += c->order[j].CalcTotal();
            }
        }
        return total;
    }

    void customerHistory()
    {
        for (int i = 0; i < countcustomer; i++)
        {
            Customer *c = customerlist[i];
            cout << "Customer Name: " << c->getName() << endl;
            for (int j = 0; j < c->ordercount; j++) // Use ordercount instead
            {
                c->order[j].Display();
            }
        }
    }

    void Display()
    {
        cout << "Mart Name " << name << endl;
        for (int i = 0; i < countcustomer; i++)
        {
            customerlist[i]->Display();
        }
    }
    ~Mart()
    {
        // cout << "Mart destructor " << endl;
    }
};
int main()
{

    Item i1 = {"Apples", "Fresh red apples", 300.0f, 2};
    Item i2 = {"Milk", "1L pack", 200.0f, 1};

    // cout << i1.getpriceforQuantity() << endl;
    // i1.Display();
    Order o1("07/04/25");
    o1.addItem(i1);
    o1.addItem(i2);
    // cout << o1.CalcTotal() << endl;
    // cout << o1.calcTax() << endl;
    // o1.Display();

    Customer c1("hamza", "T.B.Z");
    c1.Add_Order(o1);
    // c1.Display();

    Mart m1("FreshMart");
    m1.AddCustomer(&c1);
    m1.TotalSale();
    // cout << "Total Sale: " << m1.TotalSale() << endl;
    m1.customerHistory();
    m1.Display();
    // cout << "Customer Name: " << c1.getName() << endl;
    // cout << "Order Date: " << o1.CalcTotal() << endl;
    // cout << "Total Sale: " << m1.TotalSale() << endl;

    return 0;
}