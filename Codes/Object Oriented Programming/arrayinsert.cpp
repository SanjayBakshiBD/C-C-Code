#include<stdio.h>
#include<iostream>
using namespace std;
int size;
void insert(int array[], int number, int position)
{
    int i;
    for(i = size; i>= position; i--)
    {
        array[i] = array[i-1];
    }

    array[i] = number;

    size = size+1;
}

int main()
{
    int array1[50] = {11, 25, 36, 84, 95};
    int array2[7];
    size = 5;
    insert(array1, 45, 3);

    for(int i =0; i<size; i++)
    {
        printf("%d ", array1[i]);
    }
    cout << endl;


    return 0;
}
