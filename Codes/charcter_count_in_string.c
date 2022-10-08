#include<stdio.h>
#include<string.h>
int main()
{
    char a[40];
    gets(a);

    int length = strlen(a);
    int i = 0, number_of_b = 0;


    while(i<length)
    {

        if(a[i] == ' ') // or letter count
        {
            number_of_b++;
        }
        i++;
    }

    printf("There are %d spaces in the string\n", number_of_b);
    return 0;
}
