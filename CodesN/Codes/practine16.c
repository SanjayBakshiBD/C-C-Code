#include<stdio.h>
int main()
{
    int a[4]={9,5,67,4};
     int i,j,tmp,k;
     printf("initial array: ");
     for(i=0;i<4;i++)
     {
         printf("%d ", a[i]);
     }
     printf("\n");
     for(i=0;i<4;i++)
     {
         for(j=i+1;j<4;j++){
            if(a[i]> a[j])
         {
             tmp = a[i];
             a[i] = a[j];
             a[j] = tmp;
         }

         }
        printf("processing array: ");
        for(k=0;k<4;k++)
        {
            printf("%d ", a[k]);
        }
        printf("\n");
     }
    printf("finally: ");
    for(i=0;i<4;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
