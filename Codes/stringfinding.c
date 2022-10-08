#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    char b[30];
    int lengtha = 0;
    int lengthb = 0;
    int loopend, i = 0, j, k;
    int c;
    printf("Give a string\n");
    gets(a);
    printf("Give the word you want to find\n");
    gets(b);

    //printf("%s\n%s\n", a,b);

    for(c=0;a[c]!='\0';c++)
    {
        lengtha++;
    }
    printf("length of a = %d\n", lengtha);


    lengthb = strlen(b);
    printf("length of b = %d\n", lengthb);

    if(lengtha<lengthb)
    {
        printf("B is not in A\n");
        return 0;
    }

    loopend = lengtha - lengthb;

    while(i<=loopend)
    {
        char tmp[lengthb];
        j=i;
        k = 0;
        while(k<lengthb)
        {
            tmp[k] = a[j];
            j++;
            k++;
        }
        tmp[k] = '\0';
        printf("Tmp string = %s\n", tmp);
        if(strcmp(tmp, b) == 0)
        {
            //printf("B is in position %d\n", i);
            printf("B is in A\n");
            return 0;
        }
        i++;
    }

    printf("B is not in A\n");


    /*char a[100];
    char b[100];
    gets(a);
    gets(b);
    int lengtha=0;
    int lengthb=0;
     int loopend, i, j, k,tmp;
    for(i=0;a[i]!='\0';i++)
    {
        lengtha++;
    }
    lengthb=strlen(b);
    if(lengtha<lengthb)
    {
        printf("B is not in A\n");
        return 0;
    }
    loopend = lengtha-lengthb;
    while(i<=loopend)
    {
        char tmp[lengthb];
        j=i;
        k=0;
        while(k<=loopend)
        {
            tmp[k]=a[j];
            j++;
            k++;
        }
        tmp[k]='\0';
        printf("The string is %s\n", tmp);
        if(strcmp(tmp, b)==0)
        {
            printf("B is in A\n");
            return 0;
        }
        i++;
        printf("B is not in A\n");

    }*/


    return 0;
}
