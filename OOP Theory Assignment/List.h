#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class ADT
{
private:
    int arr[100] = {1, 1, 3};
    int size;

public:
    ADT()
    {
        size = 3;
    }
    void InsertBegin(int);
    void InsertLast(int);
    void Remove();
    void display();
    void RemoveAll(int);
    void Update(int index, int value);
    void Search(int);
    void Index_at(int);
    void SortList();
    // void CopyList();
    ADT(ADT &);
    void Sum();
    void Empty();
    void addlist(ADT &, ADT &);
    void RemoveDublicate();
    
};