#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
class HumanBeing{
    public:
        string name;

        void Introduce();

    private:
        int numberofeyes = 2;
};

void HumanBeing::Introduce()
{
    cout << "my name is " <<name<<endl;
}
int main()
{
    HumanBeing human;
    HumanBeing human2;
    int array[5] = {3,1,5,4,9};
    int i;
    human.name = "Sanjay";
    human.Introduce();

    human2.name = "Bakshi";
    human2.Introduce();

    sort(array,array+5);
    for(i=0;i<5;i++)
    {
       printf("%d ", array[i]);
    }


    return 0;
}
