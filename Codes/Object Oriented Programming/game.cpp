#include<iostream>
using namespace std;

class Enemy
{
private:
    int health = 100;

public:

    void enemyhit()
    {
        health = health-20;
        if(health>0)
        {
            cout <<"enemy is alive"<<endl;
        }

        else
        {
            cout <<"enemy is death"<<endl;
        }
    }

    void ShowHealth()
    {
        cout<<"Current health is " <<health<<endl;
    }
};
int main()
{
    //Enemy enemy1, enemy2, enemy3;
    Enemy enemy[10];
    int target = 0;

    while(target<10)
    {
        enemy[target].ShowHealth();
       enemy[target].enemyhit();
       enemy[target].enemyhit();
       enemy[target].enemyhit();
       enemy[target].enemyhit();
       enemy[target].enemyhit();


       target ++;
    }



    return 0;
}
