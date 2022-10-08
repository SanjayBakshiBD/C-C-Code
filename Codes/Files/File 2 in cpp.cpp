#include<fstream>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    printf("Outfile file found\n");
    ofstream outpufile("xyz.txt");
    int a, b, sum;
    cin >> a >> b;
    sum = a+b;
    outpufile << sum << endl;
    return 0;
}
