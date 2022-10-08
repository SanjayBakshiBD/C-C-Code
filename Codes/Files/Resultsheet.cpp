#include<bits/stdc++.h>
using namespace std;
struct student
{
    string name;
    int num;
};
int main()
{

    vector<struct student> stu;
    fstream file;
    file.open("marks.txt");
    int i, tmpnum;
    string tmpname;

    if(file)
    {
        printf("Input Found\n");
        while(!file.eof())
        {
            file >> tmpname >> tmpnum;
            //cout<< tmpname << " " << tmpnum << endl;
            stu.push_back({tmpname , tmpnum});
        }

        file.clear();
        file.seekg(0, ios::beg); // go back to point 0

        //sort(number.begin(), number.end(), greater<int>());
        int i,j;
        struct student temp;
        for(i=0;i<stu.size();i++)
        {
            for(j=i+1;j<stu.size();j++)
            {
                if(stu[i].num < stu[j].num)
                {
                    temp = stu[i];
                    stu[i] = stu[j];
                    stu[j] = temp;
                }
            }
        }

        printf("Output file found\n");

        for(i=0; i<(stu.size()-1); i++)
        {
            file << stu[i].name <<" " << stu[i].num << endl;
        }
        file << stu[i].name <<" " << stu[i].num;
        file.close();

    }


    return 0;
}


