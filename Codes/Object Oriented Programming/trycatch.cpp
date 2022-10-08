#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int roll, mark;
    string name;

    cin >> name >> roll >> mark;

    try{
        if(mark < 0 || mark > 100)
        {
            throw mark;
        }
        cout << "Name : " << name <<" Roll: " << roll<< " Mark : " <<mark <<endl;
    }catch(int x)
    {
        cout<< "Here Mark is invalid" << endl;
    }


    return 0;
}


