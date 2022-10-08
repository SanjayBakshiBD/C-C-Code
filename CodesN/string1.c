#include<stdio.h>
int main()
{
   char a[30];
    gets(a);
    int size = 0;
    int i;

    for(i=0; a[i] != '\0' ; i++)
    {
        size++;
    }
    printf("size = %d\n", size);
    printf("string = ");
    for(i=0; a[i] != '\0' ; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");


    return 0;
}
