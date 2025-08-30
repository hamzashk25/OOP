#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class rectangle
{
private:
    int len, width;

public:
    int setlenght(int l)
    {
        len = l;
        return len;
    }

    int setwidth(int w)
    {
        width = w;
        return width;
    }

    int getlenght()
    {
        return len;
    }

    int getwidth()
    {
        return width;
    }

    int calArea()
    {
        return len * width;
    }

    rectangle getinput(rectangle *arr, int size)
    {
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i].len;
            cout << arr[i].len;
        }
    }
};

int largest_Area(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{

    // rectangle r, r2;
    // r.setlenght(20);
    // r.setwidth(4);
    // int a = r.calArea();
    // r2.setlenght(20);
    // r2.setwidth(5);
    // int b = r2.calArea();
    // int add = a + b;
    // cout << "sum of both rectangle is " << add << endl;
    // cout << "Largest area is " << largest_Area(a, b);

    // rectangle p;
    // rectangle *arr = new rectangle[5];
    // p.getinput(arr, 5);

    int size=4;
    rectangle *rec=new rectangle[size];

    // rec = &room;

    (*rec).setlenght(109);

    cout << rec->getlenght();

    return 0;
}