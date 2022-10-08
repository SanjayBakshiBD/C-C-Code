#include<stdio.h>
int ar[50];
int size = 0;

void Push(int value)
{
    int lastpos;
    if(size == 0)
    {
        ar[0] = value;
        size++;
    }

    else
    {
        lastpos = size - 1;
        while(lastpos>=0)
        {
            ar[lastpos + 1] = ar[lastpos];
            lastpos--;
        }

        ar[0] = value;
        size++;
    }
}

int Front()
{
    return ar[size-1];
}
int Back()
{
    return ar[0];
}
void Pop()
{
    size = size - 1;
}

int Empty()
{
    if(size == 0)
    {
        return 0;
    }

    else{
        return 1;
    }
}

int main()
{
    int queue_size,i,x;
    Push(9);
    Push(10);
    Push(11);
    Push(12);
    queue_size = size;
    x = Front();
    //x = Back();
    printf("%d\n", x);
    Pop();
    x = Front();
    printf("%d\n", x);
    Pop();
    x = Front();
    printf("%d\n", x);
    Pop();
    x = Front();
    printf("%d\n", x);
    Pop();
    x = Front();
    printf("%d\n", x);
    if(Empty() == 0)
    {
        printf("Quee empty\n");
    }
    else{
       printf("Quee not empty\n");
    }

    return 0;
}
