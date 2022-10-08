#include<stdio.h>
int main()
{

    int num[] = {5, 7, 2, 4, 6};
    int mul = 1, i = 0, a, j;

  while(i<5){
    a = num[i];
    mul = 1;
    for(j = a;j>=1 ;j=j-1)
    {
        mul = mul*j;
    }
    printf("factorail %d is = %d\n", a, mul);
    i = i+1;
  }

  /*a= 8;
    for(i=a;i>=1;i=i-1)
    {
        mul = mul*i;
    }
    printf("factorail a = %d\n", mul);*/

    return 0;
}
