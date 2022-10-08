#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    //scanf("%d", &a);
    int c=3;
    int root;
    scanf("%d", &a);
    root=sqrt(a);

    if(a==1)//corner case
    {
        printf("Not primal\n");
        return 0;
    }
    else if(a%2==0)
    {
        printf("Not primal\n");
        return 0;
    }
    while(c<=root)//optimization
    {
        if((a%c)==0)

        {
            printf("Not primal\n");
            return 0;
        }
        c=c+2;
    }
    printf("Primal\n");

    return 0;
    }
