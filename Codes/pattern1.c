#include<stdio.h>
int main()
{
  int a;
  scanf("%d", &a);
  int b =1;
  int c =1;
  int d = 1;
  int e = a;
 while(b<=a){
    c = 1;
    d=1;
    while(d < e)
    {
        printf(" ");
        d++;

    }
    e--;
     while(c<=b)
     {

         printf("* ");
         c=c+1;
     }
    printf("\n");
    b++;


 }


/*printf("   1\ n");
printf("    1 2\n");
printf("   1 2 3\n");
printf("  1 2 3 4\n");
printf(" 1 2 3 4 5\n");
printf("1 2 3 4 5 6\n");*/


    return 0;
}
