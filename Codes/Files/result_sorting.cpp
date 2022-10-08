#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> number;
    fstream file;
    file.open("result.txt");

    int a, i;
    if(file)
    {
        //printf("Input Found\n");
        while(file >> a)
            number.push_back(a);
        }
        file.clear();
        file.seekg(0, ios::beg); // go back to point 0

        sort(number.begin(), number.end(), greater<int>());
        /*for(i=0; i<number.size(); i++)
        {

            cout << number[i]<< " " ;
        }*/

        cout << endl;
        //printf("Output file found\n");

        for(i=0; i<number.size(); i++)
        {
            file << number[i] << endl;
        }

        file.close();




    return 0;
    }

