#include<bits/stdc++.h>
using namespace std;

class Car{
private:
    int number_of_wheel = 4;
public:
    string color = "white";

    void showcolor()
    {
        cout <<"color of this car is " << color <<endl;
    }

    void shownumberofwheels()
    {
        cout <<"number of wheels in this car is " << number_of_wheel <<endl;
    }

    void LessenOneWheel()
    {
        number_of_wheel = number_of_wheel - 1;
    }

};
int main()
{
    Car blue;
    blue.color = "blue";
    blue.showcolor();
    //cout<<blue.color<<endl;
    blue.shownumberofwheels();
    blue.LessenOneWheel();
    blue.shownumberofwheels();
    printf("\n");

    Car red;
    red.color = "Red";
    red.showcolor();
    red.shownumberofwheels();


    return 0;
}
