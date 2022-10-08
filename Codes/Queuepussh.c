#include<stdio.h>
int main(){


    int arr[9]={3,5,1,7,56,33,76,90,198};
    int i=0,j,tmp,lowerlimit,upperlimit,avg,target;

    for(i=0;i<9;i++)
    {
        for(j=i+1;j<9;j++)
        {
            if(arr[i] > arr[j])
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    for(i=0;i<9;i++)
    {
    printf("%d ", arr[i]);
    }
    printf("\n");

    scanf("%d", target);

    lowerlimit=0;
    upperlimit=9;
    avg=(lowerlimit+upperlimit)/2;

    while(lowerlimit<=upperlimit)
    {
        if(target==arr[avg])
        {
            printf("Found in position %d\n", avg+1);
            return 0;
        }
        else if(target < arr[avg])
        {
            upperlimit=avg-1;
            avg=(lowerlimit+upperlimit)/2;
        }
        else
        {
            lowerlimit=avg+1;
            avg=(lowerlimit+upperlimit)/2;
        }
    }
    printf("Not in found\n");

    return 0;
    }

