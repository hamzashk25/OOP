
#include"product.h"

    Product::Product()
    {
        item_name = "pen";
        item_num = 02;
        item_price = 50;
        item_stock = 100;
    }

    Product::Product(string n, int id, int p, int s)
    {
        item_name = n;
        item_num = id;
        item_price = p;
        item_stock = s;
    }

    Product::Product(Product &obj)
    {
        item_name = obj.item_name;
        item_num = obj.item_num;
        item_price = obj.item_price;
        item_stock = obj.item_stock;
    }


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

// int main()
// {
//     int addProduct;
//     cout << "Enter a Products Quantity that you want Add ";
//     cin >> addProduct;

//     Product *product = new Product[addProduct];

//     inputProduct(addProduct, product);
//     SearchProduct(addProduct, product);
//     cout<<"Most Expensive Product is "<<ExpensiveItem(addProduct, product)<<endl;
//     cout<<"Products Detail Before Sell "<<endl;
//     Display(addProduct, product);
//     BuyProduct(addProduct, product);
//     Display(addProduct, product);
//     delete[] product;
//     return 0;
// }