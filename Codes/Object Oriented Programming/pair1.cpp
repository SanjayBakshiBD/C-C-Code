#include<stdio.h>
#include<iostream>
#include<iterator>
#include<vector>
#include<utility>


using namespace std;

int main()
{
    pair<string, int> p;
    p = make_pair("Joy", 18);

    cout << p.first << " " << p.second << endl;

    return 0;
}
