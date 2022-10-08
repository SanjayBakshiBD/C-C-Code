#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }

    else
    {
        return n * factorial(n-1);
    }
}



int main()
{
    int m, a;
    printf("Give a number\n");
    scanf("%d", &a);
    m = factorial(a);
    printf("%d", m);
    return 0;

}
