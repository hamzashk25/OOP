#include <iostream>
#include <string>
// #include <cstdlib>
#include <fstream>
using namespace std;
int main()
{

    ifstream in("sample.txt");
    if (!in)
    {
        cout << "Error opening file" << endl;
        return 1;
    }
    string line;

    string username;
    cout << "Enter Username: ";
    cin >> username;

    string password;
    cout << "Enter Password: ";
    cin >> password;

    string Role;
    cout << "Enter Role: ";
    cin >> Role;

    string file_username, file_password, file_role;
    bool login_successful = false;
    // Read the file line by line
    // while (getline(in, line))

    while (getline(in, line))
    {
        cout << "line" << endl;
        cout << line[0] << endl;
        cout << line[1] << endl;
        cout << line[2] << endl;
        file_username = line[0];
        file_password = line[1];
        file_role = line[2]; 
        {
            cout << file_username << endl;
            cout << file_password << endl;
            cout << file_role << endl;
            if (username == file_username && password == file_password && Role == file_role)
            {
                cout << "Login Successful" << endl;
                login_successful = true;
                break;
            }
        }
    }
    if (!login_successful)
    {
        cout << "Login Failed" << endl;
        return 0;
    }
    in.close();
    return 0;
}