// -----------------------Aggregation--------------------------
//------------------------Question 01------------------
// ---------------------------a--------------------------

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

const int max_Book = 100;
class Books
{
private:
    string author;
    string title;
    int count;

public:
    Books()
    {
        author = " ";
        title = " ";
    }

    Books(string t, string a)
    {
        author = a;
        title = t;
    }

    string getTitle()
    {
        return title;
    }
    string getAuthor()
    {
        return author;
    }

    void Display() const
    {
        cout << "Author " << author << " Title " << title << endl;
    }
};

class Library
{
private:
    Books *books[max_Book];
    int count = 0;

public:
    void AddBooks(Books *temp_obj)
    {
        if (count < max_Book)
        {
            books[count++] = temp_obj;
            cout << "Book added successfully!\n";
        }
        else
        {
            cout << "Library is full. Cannot add more books.\n";
        }
    }

    void RemoveBooks(Books *temp_obj)
    {
        for (int i = 0; i < count; i++)
        {
            if (books[i] == temp_obj)
            {
                for (int j = i; j < count - 1; j++)
                {
                    books[j] = books[j + 1];
                }
                count--;
                cout << "Book removed successfully!\n";
                return;
            }
        }
        cout << "Book not found in the library.\n";
    }

    void SearchByTitle(string title)
    {
        for (int i = 0; i < count; i++)
        {
            if (books[i]->getTitle() == title)
            {
                cout << "Book found!\n";
                books[i]->Display();
                return;
            }
        }
        cout << "Book not found in the library.\n";
    }

    void Display()
    {
        for (int i = 0; i < count; i++)
        {
            books[i]->Display();
        }
    }

    ~Library()
    {
        for (int i = 0; i < count; i++)
        {
            delete books[i];
        }
    }
};
int main()
{
    Books book1("C++ Programming", "Tonny Gaddies");
    Books book2("Calculus", "Robert Thomas");
    Books book3("AICT", "DR.Shaid Munir");

    Library L1;
    L1.AddBooks(&book1);
    L1.AddBooks(&book2);
    L1.AddBooks(&book3);

    cout << "Books in the library are: " << endl;
    L1.Display();
    cout << endl;

    cout << "Searching for a book by title: " << endl;
    L1.SearchByTitle("Calculus");
    cout << endl;

    cout << "Removing a book from the library: " << endl;
    L1.RemoveBooks(&book2);
    cout << endl;

    cout << "Display All the Books After Removing: " << endl;
    L1.Display();
    cout << endl;

    return 0;
}

// -------------------------B--------------------------------
// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class Faculty
// {
// private:
//     string name;
//     string designation;

// public:
//     Faculty(string name = " ", string designation = " ")
//     {
//         this->name = name;
//         this->designation = designation;
//     }
//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Designation: " << designation << endl;
//     }
// };
// class Student
// {
// private:
//     string name;
//     string id;
//     string department;

// public:
//     Student(string name = " ", string id = " ", string department = " ")
//     {
//         this->name = name;
//         this->id = id;
//         this->department = department;
//     }
//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "ID: " << id << endl;
//         cout << "Department: " << department << endl;
//     }
// };
// class Department
// {
// private:
//     string name;
//     Faculty *f;
//     Student *s;
//     int count;

// public:
//     Department(string name = " ", Faculty *f = NULL, Student *s = NULL)
//     {
//         this->name = name;
//         this->f = f;
//         this->s = s;
//         count = 0;
//     }
//     void addFaculty(Faculty *f)
//     {
//         this->f = f;
//     }
//     void addStudent(Student *s)
//     {
//         this->s = s;
//     }
//     void display()
//     {
//         cout << "Department Name: " << name << endl;
//         cout << "Faculty Details: " << endl;
//         f->display();
//         cout << "Student Details: " << endl;
//         s->display();
//     }
// };

// class University
// {
// private:
//     string name;
//     Department *d;
//     int count;

// public:
//     University(string name = " ", Department *d = NULL)
//     {
//         this->name = name;
//         this->d = d;
//         count = 0;
//     }
//     void addDepartment(Department *d)
//     {
//         this->d = d;
//     }
//     void display()
//     {
//         cout << "University Name: " << name << endl;
//         cout << "Department Details: " << endl;
//         d->display();
//     }
// };

// int main()
// {
//     Faculty f1("Sir Aizaz", "Professor");
//     Student s1("M.Hamza", "678", "CS");
//     Department d1("CS", &f1, &s1);
//     University u1("UET", &d1);
//     u1.display();
//     return 0;
// }

// -------------------------C--------------------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Song
// {
// private:
//     string title;
//     string artist;
//     string duration;

// public:
//     Song(string title = " ", string artist = " ", string duration = " ")
//     {
//         this->title = title;
//         this->artist = artist;
//         this->duration = duration;
//     }
//     string getTitle() const { return title; }
//     string getArtist() const { return artist; }
//     string getDuration() const { return duration; }
//     void display()
//     {
//         cout << "Title: " << title << endl;
//         cout << "Artist: " << artist << endl;
//         cout << "Duration: " << duration << endl;
//     }
// };

// class Playlist
// {
// private:
//     Song *songs;
//     int count;

// public:
//     Playlist()
//     {
//         songs = new Song[100];
//         count = 0;
//     }
//     void addSong(Song s)
//     {
//         songs[count++] = s;
//     }

//     void RemoveSongByTitle(string title)
//     {
//         for (int i = 0; i < count; i++)
//         {
//             if (songs[i].getTitle() == title)
//             {
//                 for (int j = i; j < count - 1; j++)
//                 {
//                     songs[j] = songs[j + 1];
//                 }
//                 count--;
//                 cout << "Song removed successfully!\n";
//                 return;
//             }
//         }
//         cout << "Song not found in the playlist.\n";
//     }

//     void PlayAll()
//     {
//         for (int i = 0; i < count; i++)
//         {
//             songs[i].display();
//         }
//     }

//     ~Playlist()
//     {
//         delete[] songs;
//     }
// };

// int main()
// {
//     Song s1("Baari", "Bilal saeed", "4:23");
//     Song s2("Rang", "Aroob Aftab", "3:20");
//     Song s3("Dil se", "Ali Zafar", "3:30");

//     Playlist p1;
//     p1.addSong(s1);
//     p1.addSong(s2);
//     p1.addSong(s3);

//     cout << "Songs in the playlist are: " << endl;
//     p1.PlayAll();
//     cout << endl;

//     cout << "Removing a song from the playlist: " << endl;
//     p1.RemoveSongByTitle("Rang");
//     cout << endl;

//     cout << "Display All the Songs After Removing: " << endl;
//     p1.PlayAll();
//     cout<<endl;

//     return 0;
// }

// -----------------------Composition--------------------------
// ------------------Question 02------------------
// ------------------a--------------------------
// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Engine
// {
// private:
//     bool running;

// public:
//     Engine()
//     {
//         running = false;
//     }

//     void start()
//     {
//         if (running)
//         {
//             cout << "Engine is already running.\n";
//         }
//         else
//         {
//             running = true;
//             cout << "Engine started.\n";
//         }
//     }

//     void Stop()
//     {
//         if (running)
//         {
//             running = false;
//             cout << "Engine stopped.\n";
//         }
//         else
//         {
//             cout << "Engine is already stopped.\n";
//         }
//     }

// bool isRunning() const
// {
//     return running;
// }

// };
// class Car
// {
// private:
//     string model;
//     string color;
//     Engine e;
//     public:
//     Car(string model=" ", string color=" ", Engine e=Engine())
//     {
//         this->model = model;
//         this->color = color;
//         this->e = e;
//     }
//     void start()
//     {
//         e.start();
//     }
//     void stop()
//     {
//         e.Stop();
//     }
//     void display()
//     {
//         cout << "Model: " << model << endl;
//         cout << "Color: " << color << endl;
//         cout << "Engine Status: " << e.isRunning() << endl;
//     }

// };

// int main()
// {
//     Engine e1;
//     Car c1("Toyota", "Black", e1);
//     c1.start();
//     c1.display();
//     c1.stop();
//     c1.display();
//     return 0;
// }
// ------------------b--------------------------

// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class Room
// {
// private:
//     float Area;
//     int no_of_windows;
//     int no_of_doors;

// public:
//     Room(float Area = 0, int no_of_windows = 0, int no_of_doors = 0)
//     {
//         this->Area = Area;
//         this->no_of_windows = no_of_windows;
//         this->no_of_doors = no_of_doors;
//     }
//     void setArea(float Area)
//     {
//         this->Area = Area;
//     }
//     void setNo_of_windows(int no_of_windows)
//     {
//         this->no_of_windows = no_of_windows;
//     }
//     void setNo_of_doors(int no_of_doors)
//     {
//         this->no_of_doors = no_of_doors;
//     }
//     float getArea()
//     {
//         return Area;
//     }
//     int getNo_of_windows()
//     {
//         return no_of_windows;
//     }
//     int getNo_of_doors()
//     {
//         return no_of_doors;
//     }
// };
// class House
// {
// private:
//     string Address;
//     Room r;

// public:
//     House(string Address = " ", Room r = Room())
//     {
//         this->Address = Address;
//         this->r = r;
//     }
//     void setAddress(string Address)
//     {
//         this->Address = Address;
//     }
//     void setRoom(Room r)
//     {
//         this->r = r;
//     }

//     string getAddress()
//     {
//         return Address;
//     }
//     Room getRoom()
//     {
//         return r;
//     }
//     void display()
//     {
//         cout << "Address: " << Address << endl;
//         cout << "Room Details: " << endl;
//         cout << "Area: " << r.getArea() << endl;
//         cout << "No of Windows: " << r.getNo_of_windows() << endl;
//         cout << "No of Doors: " << r.getNo_of_doors() << endl;
//     }
// };
// int main()
// {
//     Room r1(150, 5, 2);
//     House h1("Sahiwal", r1);
//     h1.display();
//     return 0;
// }

// ------------------c--------------------------
// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class storage
// {
// private:
//     int size;
//     string type;

// public:
//     storage(int size = 0, string type = "null")
//     {
//         this->size = size;
//         this->type = type;
//     }
//     void display()
//     {
//         cout << "Size: " << size << " GB" << endl;
//         cout << "Type: " << type << endl;
//     }
//     void setSize(int size)
//     {
//         this->size = size;
//     }
//     void setType(string type)
//     {
//         this->type = type;
//     }
//     int getSize()
//     {
//         return size;
//     }
//     string getType()
//     {
//         return type;
//     }
// };
// class RAM
// {
// private:
//     int size;
//     string type;

// public:
//     RAM(int size = 0, string type = "null")
//     {
//         this->size = size;
//         this->type = type;
//     }
//     void display()
//     {
//         cout << "Size: " << size << " GB" << endl;
//         cout << "Type: " << type << endl;
//     }
//     void setSize(int size)
//     {
//         this->size = size;
//     }
//     void setType(string type)
//     {
//         this->type = type;
//     }
//     int getSize()
//     {
//         return size;
//     }
//     string getType()
//     {
//         return type;
//     }
// };
// class CPU
// {
// private:
//     string brand;
//     string model;

// public:
//     CPU(string brand = " ", string model = " ")
//     {
//         this->brand = brand;
//         this->model = model;
//     }
//     void display()
//     {
//         cout << "Brand: " << brand << endl;
//         cout << "Model: " << model << endl;
//     }
//     void setBrand(string brand)
//     {
//         this->brand = brand;
//     }
//     void setModel(string model)
//     {
//         this->model = model;
//     }
//     string getBrand()
//     {
//         return brand;
//     }
//     string getModel()
//     {
//         return model;
//     }
// };
// class Computer
// {
// private:
//     CPU c;
//     RAM r;
//     storage s;
//     string Company;
//     int price;

// public:
//     Computer(string Company = "Dell", int price = 25000, CPU c = CPU(), RAM r = RAM(), storage s = storage()) // Anominus object like RAM r = RAM() is used to set default values
//     {
//         this->Company = Company;
//         this->price = price;
//         this->c = c;
//         this->r = r;
//         this->s = s;
//     }
// void display()
// {
//     cout << "Company: " << Company << endl;
//     cout << "Price: " << price << endl;
//     cout << "CPU Details: " << endl;
//     c.display();
//     cout << "RAM Details: " << endl;
//     r.display();
//     cout << "Storage Details: " << endl;
//     s.display();
// }
//     void setCPU(CPU c)
//     {
//         this->c = c;
//     }
//     void setRAM(RAM r)
//     {
//         this->r = r;
//     }
//     void setStorage(storage s)
//     {
//         this->s = s;
//     }
//     CPU getCPU()
//     {
//         return c;
//     }
//     RAM getRAM()
//     {
//         return r;
//     }
//     storage getStorage()
//     {
//         return s;
//     }

//     void checkCPUStatus()
//     {
//         cout << "CPU is working properly." << endl;
//     }
//     void checkRAMStatus()
//     {
//         cout << "RAM is functioning correctly." << endl;
//     }
//     void checkStorageStatus()
//     {
//         cout << "Storage is operating efficiently." << endl;
//     }

//     void upgradeCPU(string brand, string model) {
//         c.setBrand(brand);
//         c.setModel(model);
//         cout << "CPU upgraded successfully." << endl;
//     }
//     void upgradeRAM(int size, string type) {
//         r.setSize(size);
//         r.setType(type);
//         cout << "RAM upgraded successfully." << endl;
//     }
//     void upgradeStorage(int size, string type) {
//         s.setSize(size);
//         s.setType(type);
//         cout << "Storage upgraded successfully." << endl;
//     }
// };
// int main()
// {
//     CPU c1("Intel", "i5");
//     RAM r1(8, "DDR4");
//     storage s1(500, "SSD");
//     Computer comp1("HP", 30000, c1, r1, s1);
//     comp1.display();
//     cout << endl;

//     comp1.checkCPUStatus();
//     comp1.checkRAMStatus();
//     comp1.checkStorageStatus();
//     cout << endl;

//     comp1.upgradeCPU("AMD", "Ryzen 7");
//     comp1.upgradeRAM(16, "DDR5");
//     comp1.upgradeStorage(1000, "Super SSD");

//     cout << "\nAfter Upgrades:\n";
//     comp1.display();
//     return 0;
// }
