    #include<stdio.h>
    #include<string.h>
    int main()
    {
    int a;
    scanf("%d", &a);

    int b=1;
    int c=1;
    int d=1;
    int e=a;

    while(b<=a)
    {
        c=1;
        d=1;
        while(d < e)
        {
            printf(" ");
            d=d+1;
        }
        e--;
        while(c<=b)
        {
            printf("%d ", c);
            c=c+1;
        }
        b++;
        printf("\n");
    }
    return 0;
    }












