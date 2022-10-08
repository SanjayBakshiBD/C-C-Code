#include<stdio.h>

int sum(int x, int y)
{
    int z=x+y;
    return z;
}
int sub(int x, int y)
{
    int z=x-y;
    return z;
}
int mul(int x, int y)
{
    int z=x*y;
    return z;
}
int div(int x, int y)
{
    int z=x/y;
    return z;
}



int main(){
    int a;
    int b;
    int m;
    char x, y;

    while(1)
    {
        printf("press s for sum\n");
        printf("press m for subtraction\n");
        printf("press n for multiplication\n");
        printf("press d for divison\n");
        printf("press q to quit\n");

        scanf("%c", &x);

        if(x == 'q' || x == 'Q')
        {
            printf("programme ended\n");
            break;
        }

        else if(x == 's' || x == 'S')
        {
            printf("give two inputs\n");
            scanf("%d", &a);
            scanf("%d", &b);
            m = sum(a, b);
            printf("sum of %d and %d is %d\n\n", a, b, m);
            scanf("%c", &y);
        }

        else if(x == 'm' || x == 'M')
        {
            printf("give two inputs\n");
            scanf("%d", &a);
            scanf("%d", &b);
            m = sub(a, b);
            printf("sub of %d and %d is %d\n\n", a, b, m);
            scanf("%c", &y);
        }

         else if(x == 'n' || x == 'N')
        {
            printf("give two inputs\n");
            scanf("%d", &a);
            scanf("%d", &b);
            m = mul(a, b);
            printf("mul of %d and %d is %d\n\n", a, b, m);
            scanf("%c", &y);
        }
         else if(x == 'd' || x == 'D')
        {
            printf("give two inputs\n");
            scanf("%d", &a);
            scanf("%d", &b);
            m = div(a, b);
            printf("div of %d and %d is %d\n\n", a, b, m);
            scanf("%c", &y);
        }

        else{
            printf("wrong input\n");
            scanf("%c", &y);
        }

    }


    return 0;
}

