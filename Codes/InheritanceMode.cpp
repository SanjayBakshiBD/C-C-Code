#include<stdio.h>
#include<iostream>
using namespace std;
class A
{
public:
    int x;

private:
    int y;

protected:
    int z;


};

class B : public A
{
    //x variable is public
    //y is not available
    //z is protected
};

class C : protected A
{
    //x variable is protected
    //y is not available
    //z is protected
};

class D: private A
{
    //y is not available
    //x is private
    // z is private
};

int main()
{

    return 0;
}

