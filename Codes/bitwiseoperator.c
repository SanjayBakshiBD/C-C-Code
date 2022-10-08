#include<stdio.h>
int main()
{
    int a = 60;
    int b = 30;
    int c;
    c = a|b;
    printf("%d\n", c);

    c = a&b;
    printf("%d\n", c);

    c =~a;
    printf("%d\n", c);

    c =~b;
    printf("%d\n", c);

}
