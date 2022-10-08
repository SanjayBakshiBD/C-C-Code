#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a, b, c;

    cin >> a >> b;

    try{
        if(b == 0)
        {
            throw b;
        }
        c = a/b;
        cout << "Result " << c <<endl;
    }catch(int x)
    {
        cout<< "Here b is " <<x<< " so division is not possible" << endl;
    }

    return 0;
}
