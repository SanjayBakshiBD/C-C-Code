#include<stdio.h>
int main(){


  int num[] = {3,45,56,66,3,34,79,5,90,74};
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
        if(k !=1)
        {
            printf("Primal\n");
        }

    }







    return 0;
    }
