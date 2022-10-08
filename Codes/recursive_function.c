#include<stdio.h>
int sum (int d)
{
    if(d == 1)
    {
        return 1;
    }

    else
    {
        return d + sum(d-1);
    }
}

int main()
{

    int d,f;
    scanf("%d", &f);
    d = sum(f);
    printf("%d",d);

}
