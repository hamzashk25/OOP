#include"String.h"


STRING::STRING()
    {
        size = 0;
        str = new char[size + 1];
        str[size] = '\0';
    }
    STRING::STRING(string s)
    {
        size = s.length();
        str = new char[size + 1];
        for (int i = 0; i < size; i++)
        {
            str[i] = s[i];
        }
        str[size] = '\0';
    }
    STRING ::STRING(const STRING &obj)
    {
        size = obj.size;
        str = new char[size + 1];
        for (int i = 0; i < size; i++)
        {
            str[i] = obj.str[i];
        }
        str[size] = '\0';
    }
    void STRING::setstr(string s)
    {
        size = s.length();
        str = new char[size + 1];
        for (int i = 0; i < size; i++)
        {
            str[i] = s[i];
        }
        str[size] = '\0';
    }
    string STRING::getstr()
    {
        string s = "";
        for (int i = 0; i < size; i++)
        {
            s += str[i];
        }
        return s;
    }
    void STRING::Insert(char c)
    {
        char *temp = new char[size + 2];
        for (int i = 0; i < size; i++)
        {
            temp[i] = str[i];
        }
        temp[size] = c;
        temp[size + 1] = '\0';
        delete[] str;
        str = temp;
        size++;
    }
    int STRING::Length()
    {
        return size;
    }
    void STRING::Reverse()
    {
        for (int i = 0; i < size / 2; i++)
        {
            char temp = str[i];
            str[i] = str[size - i - 1];
            str[size - i - 1] = temp;
        }
    }
    void STRING::Concatenate(STRING s)
    {
        char *temp = new char[size + s.size + 1];
        for (int i = 0; i < size; i++)
        {
            temp[i] = str[i];
        }
        for (int i = 0; i < s.size; i++)
        {
            temp[size + i] = s.str[i];
        }
        temp[size + s.size] = '\0';
        delete[] str;
        str = temp;
        size += s.size;
    }
    STRING STRING:: Copy()
    {
        STRING temp;
        temp.size = size;
        temp.str = new char[size + 1];
        for (int i = 0; i < size; i++)
        {
            temp.str[i] = str[i];
        }
        temp.str[size] = '\0';
        return temp;
    }
    STRING::~STRING()
    {
        delete[] str;
    }


