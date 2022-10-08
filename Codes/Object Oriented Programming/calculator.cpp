#include<stdio.h>
#include<iostream>
using namespace std;
class Calculator
{
public:
    int a, b;
    int add()
    {
        int sum;
        sum=a+b;
        return sum;
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

Calculator *cal3;
cal3 = new Calculator();
cal3->a = 23;
cal3->b = 12;
c=cal3->add();
cout << "sum is "<< c <<endl;




return 0;
}
