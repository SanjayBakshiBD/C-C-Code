#include<stdio.h>
int main()
{

    int num[] = {30, 13, 2, 5, 100, 150, 25, 30, 21, 39};
    int j, i, a, k;
    for(j=0; j<10; j++)
    {
        k = 0;
        a = num[j];
        for(i=2; i<=(a-1); i = i+1)
        {
            if(a%i == 0)
            {
                printf("not primal\n");
                k=1;
                break;
            }

        }
        if(k==0)
        {
            printf("Primal\n");
        }

    }

    return 0;
}
