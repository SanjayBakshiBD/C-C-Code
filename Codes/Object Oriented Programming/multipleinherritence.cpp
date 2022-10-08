#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class Vehicle
{
  public:
    Vehicle()
    {
        cout << "this is a vehicle" <<endl;

    }
};

class FourWheeler
{
public:
    FourWheeler()
    {
       cout << "This is a four wheeler car"<< endl;
    }

};

class Car: public FourWheeler, public Vehicle
{

public:
    Car()
    {
        cout << "This is a car"<<endl;
    }
};
int main()
{
    Car car;

    return 0;
}
