 #include<stdio.h>
#include<string.h>
int main()
{

    char a[40];
    char b[40];
    gets(a);
    gets(b);

    int i,c=0,j,k;
    int lengtha=0;
    int lengthb=0;
    int loopend;

    for(i=0;a[i] != '\0';i++)
    {
        lengtha++;
    }
    printf("%d\n", lengtha);
    lengthb = strlen(b);
    printf("%d\n", lengthb);


    if(lengtha<lengthb)
    {
        printf("B is not in A\n");
        return 0;
    }
    loopend = lengtha-lengthb;
    while(c<=loopend)
    {
        char tmp[lengthb];
        j=c;
        k=0;
    while(k<lengthb)
    {
        tmp[k]=a[j];
        j++;
        k++;
    }
    tmp[k]='\0';
    printf("tmp string = %s\n", tmp);
    if(strcmp(tmp,b)==0)
    {
        printf("B is in A\n");
        return 0;
    }
      c++;
    }
    printf("B is not in A\n");





    return 0;
}
