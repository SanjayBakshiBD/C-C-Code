#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int main()
{
    ofstream outputfile("abc.txt");
    //cout << "I love Bangladesh" << endl;
    if(outputfile)
    {
        outputfile << "I love Ban" << endl;
        outputfile << "I love Bangladesh" << endl;
        outputfile.close();
    }

    else
    {
        printf("File Not found\n");
    }


    return 0;
}
