#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int roll, mark;
    string name;

    cin >> name >> roll >> mark;

    try{
        if(mark < 0)
        {
            throw mark;
        }
        if(mark>150)
        {
            throw name;
        }
        if(mark>100)
        {
            throw 45.89;
        }
        cout << "Name : " << name <<" Roll: " << roll<< " Mark : " <<mark <<endl;
    }catch(int x)
    {
        cout<< "Here integer is thrown" << endl;
    }
    catch(string x)
    {
        cout<< "Here string is thrown" << endl;
    }
    catch(double x)
    {
        cout<< "Here float is thrown" << endl;
    }


    return 0;
}


