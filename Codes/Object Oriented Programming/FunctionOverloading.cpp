#include<stdio.h>
#include<iostream>
using namespace std;
class Test
{
public:
    void Func(int x)
    {
        cout << "value of x is " << x << endl;
    }

    void Func(int x, int y)
    {
       cout << "Value of x and y is " << x <<","<<y <<endl;
    }

    void Func(double x)
    {
        cout << "value of x is " << x << endl;
    }

};

int main()
{
    Test obj;
    obj.Func(80.9);
    obj.Func(5);
    obj.Func(23, 24);
    return 0;
}



