#include<fstream>
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    string line;
    ifstream input("result.txt");


    if(input)
    {
        printf("Input File Found\n");

        while(getline(input, line))
        {
            cout << line <<endl;
        }

        input.close();
    }
    else
    {
        printf("Input File Not Found\n");
    }



    return 0;
}
