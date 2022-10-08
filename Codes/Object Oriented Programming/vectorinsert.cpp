#include<stdio.h>
#include<iostream>
using namespace std;

template <class t>
class vector{
public:
    t array[100000];
    int size = 0;

    void insert(t number, int position)
    {
        int i;

        for(i = size; i>= position; i--)
        {
            array[i] = array[i-1];
        }

        array[i] = number;

        size = size+1;

        return;
    }

    void remove()
    {
        if(size == 0)
        {
            printf("Size is 0, nothing to delete\n");

            return;
        }

        else
        {
            size = size - 1;
        }
    }

    void rep(int position)
    {
        if(size == 0)
        {
            printf("Size is 0, nothing to delete\n");

            return;
        }

        int i;

        for(i = (position-1); i<(size-1); i++)
        {
            array[i] = array[i+1];
        }

        size = size-1;

        return;
    }
    void print()
    {
        cout << "The vector is : " ;

        for(int i =0; i<size; i++)
        {
            cout << array[i] << " ";
        }

        cout << endl;

        return;
    }

};

int main()
{
    vector<int>v1;
    vector<float>v2;

    v1.print();
    v1.insert(56, 1);
    v1.insert(40, 2);
    v1.insert(30, 3);
    v1.insert(20, 4);
    v1.insert(10, 5);
    v1.insert(99,6);

    v1.print();
    //v1.remove();
    v1.print();

    v1.rep(2);
    v1.print();
    v1.rep(1);
    v1.print();
    printf("Size of first vector %d\n", v1.size);
    printf("\n");

    v2.insert(5.76, 1);
    //v2.remove();
    v2.print();
    v2.remove();
    printf("Size of second vector %d\n", v2.size);

    return 0;
}

