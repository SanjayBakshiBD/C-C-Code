#include<stdio.h>
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *root;

void Insert(int d)
{
    if(root == NULL)
    {
        struct Node *new_node = new struct Node();
        new_node->data = d;
        new_node->next = NULL;
        root = new_node;
    }

    else
    {
        Node *current_node = root;
        while(current_node->next != NULL)
        {
            current_node = current_node->next;
        }

    struct Node *new_node = new struct Node();
          new_node->data=d;
          new_node->next=NULL;
          current_node->next = new_node;

    }
    return;

}

void InsertByPosition(int pos, int d)
{
        Node *current_node = root;
        Node *previous_node;
        int current_pos = 1;
    if(pos == 1)
    {
        struct Node *new_node = new struct Node();
        new_node->data = d;
        new_node->next = root;
        root = new_node;
    }

    else
    {


        while(current_node != NULL)
        {
            if(current_pos == (pos-1))
            {
                previous_node = current_node;
            }

            else if(current_pos == pos)
            {
                struct Node *new_node = new struct Node();
                new_node->data = d;
                new_node->next = current_node;
                previous_node->next = new_node;

            }
            current_node = current_node->next;
            current_pos++;
        }
    }

    return;
}

void Print()
{
    cout << "The Linked list is : ";

    Node *current_node = root;

    while(current_node != NULL)
    {
        cout << current_node->data << " ";
        current_node = current_node->next;
    }
    cout << endl;

    return;
}

int main()
{
    Insert(8);
    Insert(34);
    Insert(12);
    Insert(90);
    Insert(97);
    Print();

    InsertByPosition(3, 120);
    Print();

    return 0;
}
