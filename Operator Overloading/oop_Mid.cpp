#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Distance
{
private:
    int Kilometers;
    float meters;

public:
    Distance(int d = 1000)
    {
        Kilometers = d;
    }

    Distance operator+(Distance &obj)
    {
        Distance temp_Dist;
        temp_Dist.Kilometers = Kilometers + obj.Kilometers;
        return temp_Dist;
    }

    Distance operator-(Distance &obj)
    {
        Distance temp_Dist;
        temp_Dist.Kilometers = Kilometers - obj.Kilometers;
        return temp_Dist;
    }

    Distance operator*(int num)
    {
        Distance temp_Dist;
        temp_Dist.Kilometers = Kilometers * num;
        return temp_Dist;
    }

    Distance operator/(int num)
    {
        Distance temp_Dist;
        temp_Dist.Kilometers = Kilometers / num;
        return temp_Dist;
    }

    bool operator==(Distance &obj)
    {

        if (Kilometers == obj.Kilometers)
            return true;
        else
            return false;
    }

    bool operator>(Distance &obj)
    {
        if (Kilometers > obj.Kilometers)
            return true;
        else
            return false;
    }

    bool operator<(Distance &obj)
    {
        if (Kilometers < obj.Kilometers)
            return true;
        else
            return false;
    }
    void Print()
    {
        if (Kilometers > 1000)
        {
            Kilometers = Kilometers / 1000;
            int a = Kilometers % 1000;
            meters = a;
        }

        cout << Kilometers << "km " << meters << " m" << endl;
    }

    friend ostream &operator<<(ostream &out, Distance obj)
    {
        out << obj.Kilometers;
        return out;
    }

    friend istream &operator>>(istream &in, Distance &obj)
    {
        in >> obj.Kilometers;
        return in;
    }
};

int main()
{
    Distance D1(1200);
    Distance D2(300);

    Distance D3 = D1 + D2;
    D3.Print();
    cout<<D3;

    Distance D4 = D1 - D2;
    D4.Print();
    
    return 0;
}