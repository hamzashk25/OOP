// #include"product.h"


#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Product
{
public:
    string item_name;
    int item_num, item_price, item_stock;

    Product();


    Product(string n, int id, int p, int s);


    Product(Product &obj);

};

void inputProduct(int add, Product p[]);


void Display(int add, Product p[]);


void SearchProduct(int add, Product p[]);


string ExpensiveItem(int add, Product p[]);


void BuyProduct(int add, Product p[]);
