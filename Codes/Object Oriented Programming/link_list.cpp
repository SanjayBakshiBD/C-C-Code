#include<stdio.h>
#include<iostream>
using namespace std;
struct Node{
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

    else{
        Node *current_node = root;
        while(current_node->next != NULL)
        {
            current_node = current_node->next;
        }
        struct Node *new_node = new struct Node();
        new_node->data = d;
        new_node->next = NULL;
        current_node->next = new_node;
    }
    return;
}
void Print(void)
{
    cout << "The linked list is : " ;
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
    Insert(5);
    Insert(10);
    Insert(15);
    Insert(90);

    Print();

    return 0;
}
