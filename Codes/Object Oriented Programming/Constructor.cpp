#include<stdio.h>
#include<iostream>
using namespace std;
class Calculator
{
public:
    int a, b;
    Calculator()
    {
        cout << "constructor called" << endl;
    }
    int add()
    {
        int sum;
        sum=a+b;
        return sum;
    }

    int sub()
    {
        int ans;
        ans = a-b;
        return ans;
    }

 };

int main()
{
    Calculator cal;
    int c;
    cal.a=12;
    cal.b=13;
    c = cal.add();
    cout<<"sum is "<<c<<endl;

    Calculator *cal2;
    cal2 = new Calculator();
    cal2->a = 12;
    cal2->b = 14;
    c = cal2->add();
    cout<<"sum is "<<c<<endl;

    //Calculator cal4;

      Calculator *cal4;
    cal2 = new Calculator();
    cal2->a = 10;
    cal2->b = 14;
    c = cal2->sub();
    cout<<"sum is "<<c<<endl;



    return 0;
}

