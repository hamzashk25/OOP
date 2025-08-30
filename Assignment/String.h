#include <iostream>
#include <string>
using namespace std;

class STRING
{
private:
    char *str;
    int size;

public:

    STRING();

    STRING(string s);

    STRING(const STRING &obj);

    void setstr(string s);

    string getstr();

    void Insert(char c);

    int Length();

    void Reverse();

    void Concatenate(STRING s);

    STRING Copy();

    ~STRING();

};