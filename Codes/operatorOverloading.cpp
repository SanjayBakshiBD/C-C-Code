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

    void Compare(Test obj)
    {
        if(a == obj.a)
            cout << "objects are equal"<<endl;
        else
            cout <<"objects are not equal" <<endl;
    }

};

int main()
{
    Test obj1(90), obj2(90);
    obj1.Compare(obj2);

    return 0;
}



