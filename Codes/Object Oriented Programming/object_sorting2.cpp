#include<fstream>
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class Student
{
private:
    string name;
    int number;

public :

    void Set(string str, int num)
    {
        name = str;
        number = num;
    }

    string getName()
    {
        return name;
    }

    int getNumber()
    {
        return number;
    }

    bool operator <(Student obj)
    {
        if(name < obj.name)
        {
           return true;
        }
        else{
           return false;
        }
    }

    bool operator >(Student obj)
    {
        if(name > obj.name)
        {
           return true;
        }
        else{
           return false;
        }
    }

};


int main()
{
    Student stu[10], temp;
    string str;
    int num;
    ifstream file;
    ofstream outfile;
    int i = 0;
    int studentCount=0;
    file.open("Student.txt");
    //stu[i].Set("sanjay", 35);
    if(file.is_open())
    {
        cout << "Input File Found\n";
        while(file >> str >> num)
        {
            //cout << str << " " << num <<endl;
            stu[i].Set(str, num);
            //stu[i].name = str;
            //stu[i].number = num;
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
            if(stu[i]>stu[j])//stu[i]>97
            {
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }

    i = 0;
    for(i=0; i<studentCount; i++)
    {
            cout << stu[i].getName() << " ";
            cout << stu[i].getNumber() << endl;
    }
    outfile.open("Student.txt");

    if(outfile.is_open())
    {
        cout << "Output File Found\n";
        i = 0;
        while(i<studentCount)
        {
            //str = stu[i].getName();
            //num = stu[i].getNumber();
            outfile << stu[i].getName() << " ";
            outfile << stu[i].getNumber() << endl;
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



