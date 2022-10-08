#include<stdio.h>
#include<iostream>
using namespace std;
class Vehicle
{
public:
    Vehicle()
    {
        cout<<"This is a vehicle"<<endl;
    }

};

class FourWheeler: public Vehicle{
public:
    FourWheeler()
    {
        cout <<"This is a four wheeler vehicle"<<endl;
    }

};

class Car: public FourWheeler
{
public:
    Car()
    {
        cout<<"This is a car"<<endl;
    }
};



int main()
{
    Car car;

    return 0;
}


