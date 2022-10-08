#include<stdio.h>
int k = 90;
void p()
{
    int a = 10;
    printf(" a in P %d\n", a);
    printf("Hello world\n");
    printf("k in P %d\n", k);
}

int Sum(int e, int f)
{
    int s = e+f;
    //printf("%d\n", s);
    return s;
}
int Sub(int e, int f)
{
    int s = e-f;
    return s;
}
void Mul (int e, int f)
{
    int s = e*f;
    printf("%d\n",s);
}


int main()
{
    int a = 5;

    int k = 10;
    int b=6;
    Sum(a,b);

    printf("k in main %d\n", k);
    k = 100;
     printf("k in main %d\n", k);
    p();
    //printf("%d", e);

    return 0;
}



