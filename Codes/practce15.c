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
int main()
{
    int a;
    int b;
    int c;
    char x, y;

    while(1)
    {
       printf("press s for sum\n");
       printf("press d for sub\n");
       printf("press e for mul\n");
       printf ("press f for div\n");
       printf("press q for quit\n");
       scanf("%c", &x);

       if(x== 'q' || x == 'Q')
       {
           printf("programme ended\n");
            break;
       }

       else if(x== 's' || x== 'S')
       {
           printf("give two inputs\n");
           scanf("%d", &a);
           scanf("%d", &b);
           c=sum(a,b);
           printf("the sum of the %d and %d is = %d\n\n", a,b,c);
           scanf("%c", &y);
       }
       else if(x== 'd' || x== 'D')
       {
           printf("give two inputs\n");
           scanf("%d", &a);
           scanf("%d", &b);
           c=sub(a, b);
           printf("the sub of the %d and %d is = %d\n\n",a ,b,c);
           scanf("%c", &y);
       }
       else if(x== 'e' || x== 'E')
       {
           printf("give two inputs\n");
           scanf("%d", &a);
           scanf("%d", &b);
           c=mul(a, b);
           printf("the mul of the %d and %d is = %d\n\n",a,b,c);
           scanf("%c", &y);
       }
       else if(x== 'f' || x== 'F')
       {
           printf("give two inputs\n");
           scanf("%d", &a);
           scanf("%d", &b);
           c=div(a, b);
           printf("the div of the %d and %d is = %d\n\n",a,b,c);
           scanf("%c", &y);
       }
       else
       {
           printf("wrong inputs\n");
           scanf("%c", &y);
       }
    }

return 0;
    }
