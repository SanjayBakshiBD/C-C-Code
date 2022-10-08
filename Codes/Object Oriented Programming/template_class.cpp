#include<iostream>
using namespace std;

template <class t1, class t2>
class test
{
private:
    t1 a;
    t2 b;

public:
    t2 add()
    {
        return a+b;
    }

    void set(t1 v, t2 w)
    {
        a = v;
        b = w;
    }

    t1 geta()
    {
        return a;
    }

    t2 getb()
    {
        return b;
    }
};

int main()
{
    test <float, int> obj;

    obj.set(9.2345, 10.5);
    cout <<"a = " <<obj.geta() << endl;
    cout << "b = " <<obj.getb() << endl;
    cout << "sum = " <<obj.add() << endl;

    return 0;
}







