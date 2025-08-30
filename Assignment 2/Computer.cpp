#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

class proceessor
{
private:
    float clockspeed;
    string core;

public:
    proceessor(float clockspeed=0, string core="")
    {
        this->clockspeed = clockspeed;
        this->core = core;
    }
    void display()
    {
        cout << "Clock Speed: " << clockspeed << " GHz" << endl;
        cout << "Core: " << core << endl;
    }
    void setClockSpeed(float clockspeed)
    {
        this->clockspeed = clockspeed;
    }
    void setcore(string core)
    {
        this->core = core;
    }

    float getClockSpeed()
    {
        return clockspeed;
    }
    string getCore()
    {
        return core;
    }
};

class HardDisk
{
private:
    int size;
    string type;
    public:
    HardDisk(int size=0, string type="null")
    {
        this->size = size;
        this->type = type;
    }
    void display()
    {
        cout << "Size: " << size << " GB" << endl;
        cout << "Type: " << type << endl;
    }
    void setSize(int size)
    {
        this->size = size;
    }
    void setType(string type)
    {
        this->type = type;
    }
    int getSize()
    {
        return size;
    }
    string getType()
    {
        return type;
    }
    
};

class Speaker{
    private:
    string brand;
    string model;
    public:
    Speaker(string brand=" ", string model=" ")
    {
        this->brand = brand;
        this->model = model;
    }
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
    void setBrand(string brand)
    {
        this->brand = brand;
    }
    void setModel(string model)
    {
        this->model = model;
    }
    string getBrand()
    {
        return brand;
    }
    string getModel()
    {
        return model;
    }
    
};


class Computer{
    private:
    proceessor p;
    HardDisk h;
    Speaker *s;
    string Company;
    int price;
    public:
    Computer(string Company="Dell", int price=25000, proceessor p = proceessor(), HardDisk h = HardDisk(), Speaker *s = NULL)   //Anominus object like HardDisk h = HardDisk() is used to set default values  
    {
        this->Company = Company;
        this->price = price;
        this->p = p;
        this->h = h;
        this->s = s;
    }
    void display()
    {
        cout<<"Company: "<<Company<<endl;
        cout<<"Price: "<<price<<endl;
        cout << "Processor Details: " << endl;
        p.display();
        cout << "Hard Disk Details: " << endl;
        h.display();
        cout << "Speaker Details: " << endl;
        if (s!=NULL)
        {
            s->display();
        }
    }
    void setProcessor(proceessor p)
    {
        this->p = p;
    }
    void setHardDisk(HardDisk h)
    {
        this->h = h;
    }
    void setSpeaker(Speaker *s)
    {
        this->s = s;
    }
    proceessor getProcessor()
    {
        return p;
    }
    HardDisk getHardDisk()
    {
        return h;
    }
    Speaker getSpeaker()
    {
        if (s != NULL)
            return *s;
        else
            return Speaker();
    }
};
int main()
{

    proceessor p(2.5, "Dual Core");
    HardDisk h(500, "SSD");
    Speaker s("Sony", "SRS-XB12");
    Computer c("Dell", 25000, p, h, &s);
    c.display();

    
    return 0;
}