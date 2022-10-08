#include<stdio.h>

void p()
{
    printf("Bangladesh is a freedom country\n");
}
void Sum(int x, int y)
{
    int z=x+y;
    printf("%d\n", z);
}
void Sub(int x, int y)
{
    int z=x-y;
    printf("%d\n", z);
}
void Mul(int x, int y)
{
    int z=x*y;
    printf("%d\n", z);
}
int main(){
    p();
    int a=14, b=45, c=4, d=30, e=25;
    Sum(a,d);
    Sum(b,e);
    Sub(b,a);
    Sub(e,c);
    Mul(a,c);
    Mul(c,d);



return 0;

}



