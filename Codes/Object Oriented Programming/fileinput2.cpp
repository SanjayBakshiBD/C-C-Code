#include<fstream>
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main()
{
    struct student{
        string name;
        int number;
    };
    string str;
    int num;
    struct student stu[10], temp;
    ifstream file;
    ofstream outfile;
    int i = 0;
    int studentCount;
    file.open("input.txt");
    if(file.is_open())
    {
        cout << "Input File Found\n";
        while(file >> str >> num)
        {
            //cout << str << " " << num <<endl;
            stu[i].name = str;
            stu[i].number = num;
            i++;
        }
        file.close();
    }
    else{
        cout << "Input File Not Found\n";
    }
    studentCount = i;
    i = 0;

    i=0;
    int j=0;
    for(i=0;i<studentCount;i++)
    {
        for(j=i+1;j<studentCount;j++)
        {
            if(stu[i].number < stu[j].number)
            {
                temp=stu[i];
                stu[i]=stu[j];
                stu[j]=temp;
            }
        }
    }


    outfile.open("input.txt");

    if(outfile.is_open())
    {
        cout << "Output File Found\n";
            i = 0;
        while(i<studentCount)
        {
            outfile << stu[i].name << " ";
            outfile << stu[i].number << endl;
            outfile << endl;
            i++;
        }
        file.close();
    }
    else{
        cout << "Output File Not Found\n";
    }
    return 0;

}


