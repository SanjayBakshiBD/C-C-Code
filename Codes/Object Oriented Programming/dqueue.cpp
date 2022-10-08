#include<stdio.h>
#include<deque>
#include<algorithm>
#include<iostream>
using namespace std;
void Show(deque<int> dq)
{
    cout << "The deqeque is: ";

    int size = dq.size();

    for(int i=0; i<size; i++)
    {
        cout << dq.at(i) << " ";
    }

    cout << endl;

    return;
}

int main()
{
    deque<int> deq;
    cout << "Initial size of deque is " << deq.size() <<endl;

    deq.push_front(10);
    deq.push_back(30);
    deq.push_front(80);
    deq.push_front(20);
    deq.push_back(40);

    Show(deq);

    deq.pop_back();
    deq.pop_front();
    Show(deq);

    cout << "Printing using empty function : ";
    while(!deq.empty())
    {
        cout << deq.front()<< " ";
        deq.pop_front();
    }

    cout << endl;
    Show(deq);


    return 0;
}

