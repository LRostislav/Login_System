#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLoggedIn()
{
    string username, password, un, pw;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream read("data\\" + username + ".txt");
    getline(read,un);   // read username
    getline(read, pw);  // read password

    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}