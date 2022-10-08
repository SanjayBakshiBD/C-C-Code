#include<stdio.h>
#include<string.h>
int main()
{
   /*printf("%c\n",'a'-32);
    printf("%c\n", 65);
    printf("%c\n", 'z'-32);
    printf("%c\n", 'A'+32);*/
    char a[20];
    char b[20];
    int x;
    gets(a);
    gets(b);
    printf("%s\n", a);
    printf("%s\n", b);

    strcat(a, " ");
    strcat(a, b);

    printf("a = %s\n", a);


    for(x=0; a[x]!='\0'; x++)
    {
        if(a[x] >=97 && a[x] <=122) // it it is a small letter
        {
            a[x] = a[x] - 32;
            printf("x= %d\n", x);
        }

    }

    printf("a = %s\n", a);


    return 0;

}
