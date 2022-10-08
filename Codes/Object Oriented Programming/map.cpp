#include<stdio.h>
#include<iostream>
#include<iterator>
#include<vector>
#include<map>

using namespace std;

int main()
{
    map<string, int> m;

    m.insert(make_pair("Zaki", 1));
    m.insert(make_pair("Akash", 19));
    m.insert(make_pair("Bikash", 50));
    m.insert(make_pair("Salam", 12));
    m.insert(make_pair("Zack", 99));


    map<string, int> :: iterator it;

    for(it = m.begin(); it!=m.end(); ++it)
    {
        cout << it-> first << " " << it->second <<endl;
    }

    m.erase(m.begin(), m.find("Salam"));

    cout<<"\nAfter erasing :  "<< endl;
    for(it = m.begin(); it!=m.end(); ++it)
    {
        cout << it-> first << " " << it->second <<endl;
    }

    m.clear();

    cout<<"\nAfter Clear :  "<< endl;
    for(it = m.begin(); it!=m.end(); ++it)
    {
        cout << it-> first << " " << it->second <<endl;
    }

    m.insert(make_pair("Zaki", 1));
    m.insert(make_pair("Akash", 19));
    m.insert(make_pair("Bikash", 50));
    m.insert(make_pair("Salam", 12));
    m.insert(make_pair("Zack", 99));

    cout<<"\nAfter Readding :  "<< endl;
    for(it = m.begin(); it!=m.end(); ++it)
    {
        cout << it-> first << " " << it->second <<endl;
    }


    return 0;
}

