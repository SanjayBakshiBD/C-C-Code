#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
class Human{
private:
    string name = "no name";
    int age = 0;
public:
    Human()
    {
        cout << "constructor called" << endl;
    }

    Human(string iname)
    {
        name = iname;
    }
    Human(int iage)
    {
        age = iage;
    }
    Human(string iname, int iage)
    {
        name = iname;
        age = iage;
    }
    void Introduce()
    {
        cout << "my name is " << name << " and I am " <<age<<" years old" <<endl;
    }

};
int main()
{
    Human man;
    man.Introduce();

    Human man2("Sanjay");
    man2.Introduce();

    Human man3(20);
    man3.Introduce();

    Human man4("Joy", 40);
    man4.Introduce();
    return 0;
}

