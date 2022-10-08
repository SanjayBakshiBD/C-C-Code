#include<stdio.h>
int main()
{

    int array[5];
    int b=0;

    while(b<5)
    {
        scanf("%d", &array[b]);
        b = b+1;
    }
    //printf(" b = %d\n", b);
    b = 0;
    while(b<5)
    {
        printf("%d\n", array[b]);
        b=b+1;
    }






    return 0;
}
