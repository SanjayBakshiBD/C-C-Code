#include<fstream>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a, b, sum;

    ifstream input("numbers.txt");

    if(input)
    {
        printf("Input Found\n");
        // get a and b from input;
        input >> a;
        input >> b;

        //input >> a >> b;

        sum = a+b;
        //cout << sum <<endl;


        ofstream outputfile("abc.txt");
        if(outputfile)
        {
            printf("Output file found\n");
            outputfile << sum << endl;

            outputfile.close();
        }

    }


    return 0;
}
