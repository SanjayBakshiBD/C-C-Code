#include<stdio.h>
#include<iostream>
#include<iterator>
#include<vector>
#include<set>

using namespace std;

int main()
{
    set<int> s;

    s.insert(23);
    s.insert(56);
    s.insert(4);
    s.insert(34);
    s.insert(70);
    s.insert(70);
    s.insert(70);
    s.insert(70);

    s.erase(s.find(70));

    set<int> :: iterator it;
    for(it=s.begin();it != s.end();++it)
    {
        cout << *it << " ";
    }

    cout << "\nsize of set is : " << s.size() <<endl;


    return 0;
}

