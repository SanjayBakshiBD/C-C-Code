#include<stdio.h>
#include<iostream>
using namespace std;

class Calculator
{
private:
    int b;
public:
    int a;
    void Setb(int value)
    {
        b = value;
    }

    int Getb()
    {
        return b;
    }


};

int main()
{
    int var;
    Calculator cal;
    cal.Setb(10);
    var = cal.Getb();
    //printf("var = %d\n", var);
    cout << var <<endl;

    return 0;
}


