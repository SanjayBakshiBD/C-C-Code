#include<iostream>
using namespace std;

/*template <class t>
t add(t a, t b)
{
    return a + b;
}

int main()
{
    cout << "Sum of two integers " << add(10, 20) << endl;
    cout << "Sum of two floats " << add(1.1, 2.2) << endl;
}*/

    template <class t>
    t add(t a, t b)
    {
        return a+b;
    }

    int main()
    {
        cout << "Sum of two integers "<< add(20, 30) << endl;
        cout << "Sum of two floats " << add(2.5, 6.9) << endl;


    return 0;
}


