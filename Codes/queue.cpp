#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int ar[10], x;

    queue<int> q;

    q.push(9);
    //x = q.pop();
    x = q.front();
    printf("size = %d\n", q.size());
    q.pop();
    //q.pop();

    printf("x = %d\n", x);
    printf("size = %d\n", q.size());


    return 0;
}
