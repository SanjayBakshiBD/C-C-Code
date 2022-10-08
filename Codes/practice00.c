#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    char b[30];
    gets(a);
    gets(b);

    int lengtha=0;
    int lengthb=0;
    int loopend;

    int i,c,start;
    for(i=0;a[i] != '\0';i++)
    {
        lengtha++;
    }
    printf("Length = %d\n", lengtha);
    lengthb=strlen(b);
    c=0;
    while(c<=loopend)
    {
        i=0;
        start=c;
        if(a[start]=b[i])
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
            if(i == lengthb)
            {
                printf("B is in A\n");
                return 0;
            }

        }
         c++;
    }
    printf("B is not in A\n");
    return 0;
}
