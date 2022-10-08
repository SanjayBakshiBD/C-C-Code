#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

template <class t>
class stack{
public:
    t array[100000];
    int size = 0;

    void insert(t data)
    {

        array[size] = data;

        size = size+1;

        return;
    }

    t remove()
    {
        if(size == 0)
        {
            printf("Size is 0, nothing to delete\n");

            return NULL;
        }

        else
        {
            size = size - 1;
            return array[size];

        }
    }

    void print()
    {
        cout << "The stack is : " ;

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
    stack<int>s1;
    s1.print();
    for(int i =0; i<5; i++)
    {
        int x;
        cin >> x;
        s1.insert(x);
    }

    int x = s1.remove();
    printf("%d is removed\n", x);

    s1.print();

    return 0;
}

