#include<stdio.h>
#include<string.h>
int main()
{
    char a[40];
    char b[40];
    int lengtha=0;
    int lengthb=0;
    int loopend;
    int c,i,start;
    printf("Give a string\n");
    gets(a);
    printf("Give the word you want to find\n");
    gets(b);
    for(c=0; a[c] != '\0';c++)
    {
        lengtha++;
    }
    printf("length of a = %d\n", lengtha);
    lengthb = strlen(b);
    printf("length of b = %d\n", lengthb);
    c=0;
    loopend = lengtha-lengthb;

    while(c<=loopend)
    {
        i=0;
        start = c;
        if(a[start]==b[i])
        {
            while(i<lengthb)
            {
                if(a[start]!=b[i])
                {
                    break;
                }
                i++;
                start++;
            }
            if(i==lengthb)
            {
                //printf("B is in position %d\n", c);
                printf("B is in A\n");
                return 0;
            }
        }
        c++;
    }
    printf("B is not in A\n");
    return 0;
}
