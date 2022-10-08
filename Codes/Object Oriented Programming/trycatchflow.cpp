#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    cout << "1st Line" <<endl;
    cout << "2nd Line" << endl;

    try{
        cout << "Inside Try 1" << endl;
        cout << "Inside Try 2" << endl;
        cout << "Inside Try 3" << endl;

        if(a == 5)
        {
            cout << "Inside if before throw 1" << endl;
            cout << "Inside if before throw 2" << endl;
            cout << "Inside if before throw 3" << endl;
            throw a;
            cout << "Inside if after throw 1" << endl;
            cout << "Inside if after throw 2" << endl;
        }
         cout << "Inside Try after if 1" << endl;
         cout << "Inside Try after if 2" << endl;
    }catch(int x)
    {
        cout<< "inside catch 1" << endl;
        cout<< "inside catch 2" << endl;
        cout<< "inside catch 3" << endl;
    }

    cout << "After try catch 1" << endl;
    cout << "After try catch 2" << endl;

    return 0;
}



