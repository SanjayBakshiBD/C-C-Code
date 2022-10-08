#include<fstream>
#include<iostream>
#include<stdio.h>
using namespace std;
class student{
public:
    string name;
    int roll;
    void GetStudent()
    {
        cout << "Input Student Name\n";
        cin >> name;
        cout << "Input Student Roll\n";
        cin >> roll;
    }

};

int main()
{
    int i = 0;
    student stu;
    ofstream file;
    file.open("student.dat");
    while(i<3)
    {
        stu.GetStudent();
        file << stu.name <<" ";
        file << stu.roll << endl;
        i++;
    }


    file.close();
    return 0;

}
