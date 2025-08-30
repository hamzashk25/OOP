#include <iostream>
using namespace std;

class Sales
{
protected:
    float Array[3];

public:
};

class Publication
{
protected:
    string title;
    double price;

public:
    /*Publication(string t = "", double p)
    {
        title = t;
        price = p;
    }*/

    void getData()
    {
        cout << "Enter title of Publication: ";
        cin >> title;

        cout << "Enter the price of publication: ";
        cin >> price;
    }

    void display()
    {
        cout << " Title: " << title << endl;
        cout << " Price: " << price << endl;
        cout << endl;
    }
};

class Book : public Publication, public Sales
{
private:
    int pageCount;

public:
    /*Book(string t = "", double p, int pc) : Publication(t, p)
    {
        pageCount = pc;
    }*/

    void getData()
    {
        cout << "Enter title: ";
        cin >> Publication::title;
        cout << "Enter price: ";
        cin >> Publication::price;
        cout << "Enter Page Count: ";
        cin >> pageCount;
        cout << "Enter the last 3 months seperate sales of the book: ";
        for (int i = 0; i < 3; i++)
        {
            cin >> Array[i];
        }
    }

    void display()
    {
        cout << "Title: " << title << endl
             << "Price: " << price << endl
             << "PageCount: " << pageCount << endl;
        cout << "Sales: ";
        for (int i = 0; i < 3; i++)
        {
            cout << Array[i] << "  ";
        }
        cout << endl;
    }
};

class Tape : public Publication, public Sales
{
private:
    float playTime;

public:
    void getData()
    {
        cout << "Enter title: ";
        cin >> Publication::title;
        cout << "Enter price: ";
        cin >> Publication::price;
        cout << "Enter Play time in minutes: ";
        cin >> playTime;
    }

    void display()
    {
        cout << "Title: " << title << endl
             << "Price: " << price << endl
             << "PlayTime: " << playTime << endl;
        cout << endl;
    }
};

class Disk : public Publication
{
private:
    char diskType;

public:
    void getData()
    {
        cout << "Enter the title of the disk: ";
        cin >> Publication::title;
        cout << "Enter the price: ";
        cin >> Publication::price;
        cout << "Enter the disk type (c for CD, d for DVD): ";
        cin >> diskType;
    }

    void display()
    {
        cout << "Disk Title: " << title << endl;
        cout << "Disk Price: " << price << endl;

        if (diskType == 'c')
            cout << "Disk Type: CD";
        else
            cout << "Disk Type: DVD" << endl;
    }
};

int main()
{
    Publication P1;
    P1.getData();

    // Book B1;
    // B1.getData();

    // Tape T1;
    // T1.getData();

    Disk D1;
    D1.getData();

    P1.display();
    // B1.display();
    // T1.display();
    D1.display();
}