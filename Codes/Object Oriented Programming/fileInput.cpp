#include<fstream>
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    string str;
    ifstream file;
    file.open("input.txt");
    if(file.is_open())
    {
        cout << "File Found\n";
        while(getline(file, str))
        {
            cout << str <<endl;
        }
        file.close();
    }
    else{
        cout << "File Not Found\n";
    }
    return 0;

}

