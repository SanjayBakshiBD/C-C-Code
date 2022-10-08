#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char b[100];
    gets(a);
    gets(b);

    int i, c, start;
    int lengtha=0;
    int lengthb=0;
    int loopend;

    for(i=0; a[i] != '\0'; i++)
    {
        lengtha++;
    }
    printf("%d\n", lengtha);
    lengthb=strlen(b);
    i=0;
    loopend = lengtha-lengthb;

    while(i<=loopend)
    {
        c=0;
        start=i;
        if(a[start]==b[c])
        {
            while(c<lengthb)
            {
                if(a[start]!=b[c])
                {
                    break;
                }
                c++;
                start++;
            }
            if(c==lengthb)
            {
                printf("B IS IN A\n");
                return 0;
            }

        }
        i++;
    }
    printf("B IS NOT IN A\n");

    return 0;
}
