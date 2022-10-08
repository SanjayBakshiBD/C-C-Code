#include<stdio.h>
int main()
{
 int a;
 scanf("%d", &a);

 int b=1;
 int c=1;

 while(b<=a)

 {
    c=1;
 while(c<=a)
 {
     printf("%d ", a);
     c=c+1;
 }
 b=b+1;
 printf("\n");
 }

    return 0;
}
