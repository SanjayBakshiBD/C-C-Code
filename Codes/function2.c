#include<stdio.h>
#include<math.h>
int a=100;

void OddEven(int a)
{
    if(a%2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}


void PrimalNotPrimal(int a)
{
    int c = 3;
    int root;
    root = sqrt(a);
    if(a==1)//corner case
    {
        printf("not primal\n");
        return;
    }

    else if (a%2 == 0)
    {
        printf("not primal\n");
        return;
    }

    else
    {
        while(c<= root) //Optimization
        {
            if((a%c) == 0)
            {
                printf("Not primal\n");
                return;

            }
            c = c+2;
        }

    }

    printf("primal");

}

int main(){
    OddEven(a);
    PrimalNotPrimal(a);

 return 0;
}
