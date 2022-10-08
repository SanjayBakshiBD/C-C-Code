#include<iostream>
using namespace std;

template <class t1, class t2>
t1 add(t1 a, t2 b)
{
    return a + b;
}

template <class t1, class t2, class t3>
t1 add(t1 a, t2 b, t3 c)
{
    return a + b + c;
}


template <class t1>
t1 add(t1 a[], int size)
{
    int i=0;
    t1 sum = 0;

    for(i=0; i<size; i++)
    {
       sum = sum+a[i];
    }

    return sum;
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    cout << "Sum of two integers " << add(10, 20) << endl;
    cout << "Sum of two floats " << add(1.1, 2.2) << endl;
    cout << "Sum of one int one float " <<add(10, 1.1) << endl;
    cout << "Sum of one float one int " <<add(1.1, 10) << endl;
    cout << "Sum of three int " <<add(10, 20 , 30) << endl;
    cout << "Sum of array " << add(array, 5) << endl;

    return 0;
}



