#include<stdio.h>
int main()
{

    int a[6]={34,6,67,8,78,9};
    int b,c,d,tmp;

    printf("initial array: ");
    for(b=0;b<6;b++)
    {

        printf("%d ", a[b]);
    }
    printf("\n");

    for(b=0;b<6;b++)
    {
        for(c=b+1;c<6;c++)
        {
            if(a[b] > a[c])
            {
                tmp=a[b];
                a[b]=a[c];
                a[c]=tmp;
            }

        }
        printf("processing array: ");
        for(d=0;d<6;d++)
        {
            printf("%d ", a[d]);
        }
        printf("\n");
    }

    printf("finally: ");
    for(b=0;b<6;b++)
    {
        printf("%d ", a[b]);
    }
    printf("\n");


    return 0;
}
