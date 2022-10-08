#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

int main()
{
    //push_back << adds in the last place;
    //size() << return the size;
    //insert()
    //begin();
    //end();
    //pop_back();
    //clear
    //empty
    //at()
    //erase();

    vector <int> my_vector={6,8,9,8};//my_vector;


    cout << "Vector : ";
    for(int i = 0 ; i<my_vector.size(); i++)
    {

        cout<<my_vector.at(i) << " ";
    }

    cout << endl;

    my_vector.push_back(5);
    my_vector.push_back(50);
    my_vector.push_back(500);

    cout << "Vector : ";
    for(int i = 0 ; i<my_vector.size(); i++)
    {
        cout << my_vector[i] << " ";
        //cout<<my_vector.at(i) << " ";
    }

    cout << endl;

    my_vector.insert(my_vector.begin(), 56);

    cout << "Vector : ";
    for(int i = 0 ; i<my_vector.size(); i++)
    {
        cout << my_vector[i] << " ";
    }

    cout << endl;

    my_vector.insert(my_vector.begin()+2, 60);
    cout << "Vector : ";
    for(int i = 0 ; i<my_vector.size(); i++)
    {
        cout << my_vector[i] << " ";
    }

    cout << endl;
    my_vector.insert(my_vector.end(), 70);
    cout << "Vector : ";
    for(int i = 0 ; i<my_vector.size(); i++)
    {
        cout << my_vector[i] << " ";
    }

    cout << endl;

    my_vector.pop_back();
    cout << "Vector : ";
    for(int i = 0 ; i<my_vector.size(); i++)
    {
        cout << my_vector[i] << " ";
    }

    cout << endl;

    my_vector.erase(my_vector.begin());
    cout << "Vector : ";
    for(int i = 0 ; i<my_vector.size(); i++)
    {
        cout << my_vector[i] << " ";
    }

    cout << endl;

    my_vector.erase(my_vector.begin()+1);
    cout << "Vector : ";
    for(int i = 0 ; i<my_vector.size(); i++)
    {
        cout << my_vector[i] << " ";
    }

    cout << endl;

    return 0;
}
