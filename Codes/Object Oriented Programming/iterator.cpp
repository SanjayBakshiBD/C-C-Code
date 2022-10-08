#include<stdio.h>
#include<iostream>
#include<iterator>
#include<vector>

using namespace std;

int main()
{
   vector<int> my_vector = {23, 22, 4, 44, 67};

    //for(int i=0;i<5;i++)
        //cout << my_vector[i]<< " ";


    vector<int> :: iterator it;
    it = my_vector.begin();

    while(it != my_vector.end())
    {
        cout << *it <<endl;
        ++it;
    }

    cout << "\nusing for loop"<< endl;
    for(it = my_vector.begin(); it != my_vector.end(); ++it)
    {
      cout << *it <<endl;
    }

    vector<string>my_vec={"san", "joy", "uttam", "kamol"};

    vector<string> :: iterator i;
    i=my_vec.begin();
    cout << endl << *i << endl;
    while(i!= my_vec.end())
    {
        cout << *i << endl;
        ++i;
    }

    i=my_vec.begin();
    //advance(i, 3);
    //cout << *i << endl;

    auto j =  next(i, 3);
    cout << "j is pointing at " << *j <<endl;
    cout << "i is pointing at " << *i <<endl;

    return 0;
}
