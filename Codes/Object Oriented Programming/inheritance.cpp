#include<stdio.h>
#include<iostream>
using namespace std;
class A
{

public:
    int fromclassA;
};

class B : public A
{
public:
    int fromclassB;
};

class C : public A
{
public:
    int fromclassC;
};

int main()
{
    B objB;
    objB.fromclassA = 7;
    objB.fromclassB = 90;

    cout<< objB.fromclassA <<" " << objB.fromclassB <<endl;

    C objC;
    objC.fromclassA = 80;
    objC.fromclassC = 5;
    cout<< objC.fromclassA <<" " << objC.fromclassC <<endl;


    return 0;
}
