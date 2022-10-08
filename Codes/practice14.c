#include<stdio.h>
int main(){

    int array[]={3,45,56,66,3,34,79};
    int a,b,c,d;


    for(a=0;a<7;a++)
    {
      d=0;
      c=array[a];
      for(b=2;b<=(c-1);b=b+1)
      {
          if(c%b == 0)
          {
              printf("not primal\n");
              d=1;
              break;
          }
      }

        if(d!=1)
        {
            printf("primal\n");
        }

    }


    return 0;
}

