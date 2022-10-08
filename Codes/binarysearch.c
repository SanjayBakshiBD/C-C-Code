 #include<stdio.h>
int main()
{
   int array[10]={34,2,54,5,8,1,12,89,66, 89};
   int i,j,tmp, lowerlimit, upperlimit, avg, target,position;
   for(i=0;i<10;i++)
   {
    for(j=i+1;j<10;j++)
    {
        if(array[i] > array[j])
        {
            tmp=array[i];
            array[i]=array[j];
            array[j]=tmp;
        }

    }

   }
   for(i=0;i<10;i++)
   {
       printf("%d ", array[i]);
   }
    printf("\n");
    //printf("Give the number you want to find\n");
    scanf("%d", &target);

    lowerlimit = 0;
    upperlimit = 10;
    avg = (lowerlimit+upperlimit)/2;

    while(lowerlimit<=upperlimit)
    {
        if(target == array[avg])
        {
            printf("Found in position %d\n", avg+1);
            return 0;
        }
        else if(target<array[avg])
        {
            upperlimit = avg-1;
            avg = (lowerlimit+upperlimit)/2;
        }

        else{
            lowerlimit = avg+1;
            avg = (lowerlimit+upperlimit)/2;
        }
    }

    printf("Not found\n");
    return 0;
}
