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


int main(){
    int a=10;
    int b=26;
    int m;
    int n;
    scanf("%d", &m);
    m = sum(a,b);
    n = sub(a,b);
    printf("%d\n", m);
    printf("%d\n", n);
return 0;
}
