#include<stdio.h>
#include<iostream>
using namespace std;

struct student
{
    string name;
    int roll;
    struct student *Next;
};
struct student *root;

void Insert(string n, int r)
{
    if(root == NULL)
    {
        struct student *new_node = new struct student();
        new_node-> name = n;
        new_node-> roll =r;
        new_node->Next = NULL;
        root = new_node;
    }
    else
    {
          student *current_node = root;
        while(current_node->Next != NULL)
        {
            current_node = current_node->Next;
        }
         struct student *new_node = new struct student();
        new_node->name = n;
        new_node->roll = r;
        new_node->Next = NULL;
        current_node->Next = new_node;
    }
    return;
}

void print(void)
{
     cout << "The linked list is : " ;
    student *current_node = root;

    while(current_node != NULL)
    {
        cout << current_node->name << " " << current_node->roll << " ";
        current_node = current_node->Next;
    }

    cout << endl;

    return;
}

void DeleteByPosition(int deletepos)
{
    if(deletepos == 1)
    {
        root = root->Next;

        return;
    }

    student *current_node = root;
    student *previous_node;
    int current_pos = 1;

    while(current_node != NULL)
    {
        if(current_pos == (deletepos-1))
        {
            previous_node = current_node;
        }

        if(current_pos == deletepos)
        {
            previous_node->Next = current_node->Next;

            return;
        }

        current_node = current_node->Next;
        current_pos++;
    }
}

int main()
{
    Insert("joy", 6);
    Insert("jo", 8);
    Insert("j", 9);
    Insert("Salam", 1);
    Insert("Kalam", 2);

    print();

    DeleteByPosition(1);
    print();

    DeleteByPosition(2);
    print();

    DeleteByPosition(3);
    print();

    return 0;
}
