#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    /*queue <int> intq;
    queue<string> strq;

    intq.push(5);
    intq.push(6);
    intq.push(3);
    int qsize = intq.size();
    cout << "queue: ";
    for(int i=0; i<qsize; i++)
    {
        cout << intq.front() << " ";
        intq.pop();

    }
    cout << endl;

    strq.push("9");
    strq.push("name");
    strq.push("title");

    cout << "queue: ";
    while(!strq.empty())
    {
        cout << strq.front() << " ";
        strq.pop();
    }
    cout << endl;

    cout << strq.back() << " ";*/

 queue <int> intq;
 queue <string> strq;
 intq.push(7);
 intq.push(9);
 intq.push(12);
 cout << "queue: ";
 int qsize=intq.size();

 for(int i=0;i<qsize;i++)
 {
     cout << intq.front() << " ";
     intq.pop();
 }
 cout << endl;

    cout << "queue: ";
 cout << intq.back() << " ";

 cout << endl;
 strq.push("san");
 strq.push("joy");
 strq.push("sam");

 cout << "queue: ";
 while(!strq.empty())
 {
     cout << strq.front() << " ";
     strq.pop();
 }
 cout << endl;

    cout << "queue: ";
 cout << strq.back() << " ";

    return 0;
}

