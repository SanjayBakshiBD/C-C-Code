
#include<stdio.h>

int sum(int x, int y)
{
    int z=x+y;
    return z;
}
int sub(int x, int y)
{
    int z=x-y;
    return z;
}
int mul(int x, int y)
{
    int z=x*y;
    return z;
}
int div(int x, int y)
{
    int z=x/y;
    return z;
}
int main(){
    int a=10;
    int b=20;
    int m;
    int n;

    m = sum(a,b);
    printf("m = %d\n", m);
    m = sub(m,a);
    printf("m = %d\n", m);
    m=mul(a,b);
    printf("m=%d\n", m);
    m=div(a,b);
    printf("m = %d\n", m);


    return 0;
}
