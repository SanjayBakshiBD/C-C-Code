#include<stdio.h>
#include<iostream>
#include<iterator>
#include<vector>
#include<utility>
#include<string>

using namespace std;

int main()
{
    vector<pair<string, int>> v;

    v.push_back(make_pair("bikash", 42));
    v.push_back(make_pair("salam",43));
    v.push_back( make_pair("christy",67));
    v.push_back(make_pair("danny",54));
    v.push_back(make_pair("partha",55));

    vector<pair<string, int>> :: iterator it;

    for(it = v.begin(); it!=v.end(); ++it)
    {
        cout << it->first << " " << it->second <<endl;
    }




    return 0;
}
