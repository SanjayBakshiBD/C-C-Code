#include<string.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int mark, roll;
    string name;

    cout << "Input Name Roll and Mark Serially\n";
    cin >> name >> roll >> mark;
    try
    {
        if(mark<0)
        {
            throw mark;
        }

        if(mark > 140)
        {
            throw name;
        }

        if(mark>100)
        {
            throw roll;
        }

        cout<<"Name: "<<name<<"Roll: "<<roll<<"Mark: "<<mark<<endl;
    }
    catch(int x)
    {
        cout<<"Here integer is thrown"<<endl;
    }
    catch(...)
    {
        cout<<"Here all data type is thrown"<<endl;
    }

    return 0;
}



