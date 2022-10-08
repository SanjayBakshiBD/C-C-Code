#include<stdio.h>
int main()
{
   int a,b;
   int *x;
   x=&a;
   scanf("%d", &a);
   printf("a=%d\n", a);
   printf("location of a = %d\n", &a);
   printf("x=%d\n", x);
   *x=*x+1;
   printf("x=%d\n", x);
   printf("a=%d\n", a);



    return 0;
}
