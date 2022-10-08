#include<stdio.h>
#include<iostream>
using namespace std;
class Test
{
private:
    int a;
public:
    Test (int x)
    {
       a = x;
    }

    void operator == (Test obj)
    {
        if(a == obj.a)
            cout << "objects are equal"<<endl;
        else
            cout <<"objects are not equal" <<endl;
    }

    Test operator + (Test obj2)
    {
        int tmp = a + obj2.a;
        Test obj5(tmp);
        return obj5;
    }

    void Show()
    {
        cout << "value of a " << a <<endl;
    }

};

int main()
{
    Test obj1(9), obj2(90);
    //obj1.Compare(obj2);
    obj1 == obj2;
    //Test obj3 = obj1 .add(obj2);
    Test obj3 = obj1 + obj2;
    obj3.Show();

    return 0;
}




