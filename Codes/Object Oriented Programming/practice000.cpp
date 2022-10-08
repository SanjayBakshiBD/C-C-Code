#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class Student
{
    private:
    string name;
    int number;
public:
    void Set(string str, int num)
    {
        name=str;
        number=num;
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
        else
        {
            return false;
        }

    }

};

int main()
{
    Student stu[20],temp;
    string str;
    int num;
    ifstream file;
    ofstream outfile;
    int i=0;
    int studentCount=0;
    file.open("student1.txt");
    if(file.is_open())
    {
        cout << "Input File Found" << endl;
        while(file >> str >> num)
        {
            stu[i].Set(str,num);
            i++;
        }
        file.close();
    }
    else
    {
        cout << "Input File not Found" << endl;
    }
    cout << "after input " << endl;

    studentCount=i;
    int j=0;
    i=0;
    while(i<studentCount)
    {
    cout << i <<" : " << stu[i].getName()  << " " << stu[i].getNumber() << " ";
    cout << endl;
    i++;
    }
    for(i=0;i<studentCount;i++)
    {
        for(j=i+1;j<studentCount;j++)
        {
            if(stu[i]<stu[j])
            {
                temp=stu[i];
                stu[i]=stu[j];
                stu[j]=temp;
            }
        }
    }
    i=0;
    cout << "After sort " <<endl;
    while(i<studentCount)
    {
    cout << i <<" : " << stu[i].getName()  << " " << stu[i].getNumber() << " ";
    cout << endl;
    i++;
    }
    outfile.open("student1.txt");

    i = 0;
    if(outfile.is_open())
    {
        cout << "Output File Found" << endl;

        while(i<studentCount)
        {
            outfile << stu[i].getName() <<" ";
            outfile << stu[i].getNumber() << endl;
            outfile << endl;
            i++;
        }
        file.close();
    }
    else
    {
        cout << "Output File not Found" << endl;
    }

    return 0;
}
