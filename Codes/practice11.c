#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b=1;
    int c=1;
    //int d=a;
    while(b<=a){
       c=1;
       while(c<=a)

        {
            printf("%d ", c);
            c=c+1;
        }
        printf("\n");
        b++;

    }


    return 0;

}
