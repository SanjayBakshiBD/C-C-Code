 #include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int remainder;

    remainder = a%2;

    if(remainder == 1)
    {
        printf("a is odd\n");
    }

    else
    {
        printf("a is even\n");
    }

    return 0;
}



