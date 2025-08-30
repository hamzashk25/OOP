#include"List.h"

void ADT::InsertBegin(int value)
{
    for (int i = size; i > 0; --i)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    size++;
}

void ADT::InsertLast(int value)
{
    arr[size++] = value;
}

void ADT ::Remove()
{
    size--;
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void ADT ::RemoveAll(int value)
{
    int newsize = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != value)
        {
            arr[newsize++] = arr[i];
        }
    }
    size = newsize;
}

void ADT ::Search(int value)
{
    int newsize = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            cout << "Value " << value << " is at index of " << i << endl;
        }
    }
}

void ADT ::Index_at(int index)
{
    if (index >= 0 && index < size)
        cout << "Value at index " << index << " is " << arr[index] << endl;
    else
        cout << "Invalid Index !";
}

void ADT::SortList()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

ADT::ADT(ADT &newlist)
{

    for (int i = 0; i < size; i++)
    {
        arr[i] = newlist.arr[i];
    }

    // newlist.display();
}

void ADT::Update(int index, int value)
{
    arr[index] = value;
}

void ADT ::Sum()
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    cout << "Sum of Array is " << sum << endl;
}

void ADT::Empty()
{
    for (int i = 0; i < size; i++)
    {
    }
}

void ADT::addlist(ADT &list, ADT &newlist)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = list.arr[i] + newlist.arr[i];
    }
}

void ADT ::RemoveDublicate()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = -1;
            }
        }
    }

    for(int i=0;i<size;i++)
    {
        if(arr[i]!=-1)
        {
            cout<<arr[i]<<" ";
        }
    }
}

void ADT ::display()
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}