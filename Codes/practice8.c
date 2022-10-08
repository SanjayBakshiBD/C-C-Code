#include<stdio.h>
int main()
{

    int array[]={5,98,43,56,76,80,4};
    int a,b,c,d;

    for(a=0;a<7;a++)
    {
       d=0;
      b=array[a];
      for(c=2;c<=(b-1);c=c+1){
        if(b%c == 0)
        {
            printf("not primal\n");

            d=1;
            break;
        }
      }
        if(d==0)
        {
            printf("primal\n");


        }


      }
    return 0;
}


