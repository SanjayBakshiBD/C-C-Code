#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if(a < 0)
    {
        printf("Less than 0\n");
    }
    else if(a >=0 && a<10)
    {
        printf("a is between 0 and 10\n");
    }
    else if(a>=10 && a< 20)
    {
        printf("a is between 10 and 20\n");
    }
   else
    {
        printf("A is greater than 19\n");
    }

    return 0;
}


