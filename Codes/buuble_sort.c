#include<stdio.h>
int main()
{
    int a[4] = {10,9,15, 3};
    int i, j, tmp, k;
    printf("Initial Array: ");
    for(i=0; i<4; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

   for(i = 0; i<4; i++)
    {
        for(j = i+1; j<4; j++)
        {
            if(a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
        printf("Processing array: ");
           for(k=0; k<4; k++)
            {
                printf("%d ", a[k]);
            }
            printf("\n");
    }

   printf("Finally ");
    for(i=0; i<4; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
