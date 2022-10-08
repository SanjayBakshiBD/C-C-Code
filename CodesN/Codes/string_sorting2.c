
#include<stdio.h>
int main()
{
  char a[20] = "dzxcdfgabnm"; //abcdfgmnxz
  char tmp;
  int length=0;
  int c,d;

    for(c=0; a[c] != '\0'; c++)
    {
        length++;
    }
    printf("length = %d\n", length);

    for(c=0;c<length;c++)
    {
        for(d=c+1;d<length;d++)
        {
            if(a[c] > a[d])
            {
                tmp = a[c];
                a[c] = a[d];
                a[d] = tmp;
            }
        }

    }

    printf("%s\n", a);



    return 0;

}
