#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
class Test
{
private:
    char str[50];
public:

    void Show()
    {
        cout << "String is " << str <<endl;
    }

    void Input()
    {
        cout << "Give a string " <<endl;
        cin >> str;
    }
    void Set(char istr[])
    {
        strcpy(str, istr);
    }

    Test operator +(Test obj)
    {
        Test newObj;
        strcat(str,obj.str);//implicit, explicit
        newObj.Set(str);

        return newObj;
    }


};

int main()
{
    Test obj1, obj2, obj3;

    obj1.Input();
    obj1.Show();

    obj2.Input();
    obj2.Show();

    //obj3 = obj1.Add(obj2);
    //obj3.Show();

    obj3 = obj1+obj2;
    obj3.Show();

    return 0;
}





