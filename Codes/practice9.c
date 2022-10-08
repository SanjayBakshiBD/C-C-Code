#include<stdio.h>
int main()
{

    int a[8];
    int c=0;

    while(c<8)
    {
        scanf("%d", &a[c]);
        c=c+1;
    }

    c=0;
    while(c<8)
    {
        printf("%d\n", a[c]);
        c=c+1;
    }
    return 0;

}
