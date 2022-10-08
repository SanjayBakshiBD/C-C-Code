#include<stdio.h>
int main()
{
    char a[30];
    int size = 0;
    int i;
    gets(a);
    for(i=0; a[i] != '\0' ; i++)
    {
        size++;
    }
    printf("size = %d\n", size);
    //printf("string = ");
    for(i=0; a[i] != '\0' ; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");

    return 0;
}
