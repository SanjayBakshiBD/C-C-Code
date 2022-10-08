#include<stdio.h>
#include<iostream>
using namespace std;
class Calculator
{
public:
    int id;
    Calculator(int newid)
    {
        id = newid;
        cout << "constructor called for " << id << endl;
    }

    ~Calculator()
    {
        cout<<"Destructor called for "<<id<<endl;
    }

 };

int main()
{
    Calculator cal(90);
    //cal.id = 90;
    int i = 0;
    while(i<5)
    {
        Calculator cal2(i);
        i++;
    }

    return 0;
}


