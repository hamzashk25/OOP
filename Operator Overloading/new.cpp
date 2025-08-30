#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{

    int a = 16, b = 12;
    while (b != 0)
    {
        int r=a%b;
        a=b;
        b=r;
    }

    cout<<b;
    return 0;
}