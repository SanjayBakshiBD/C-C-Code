#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        if(i == 5)
        {
            i++;
            continue;
        }
        else if(i== 9)
        {
            break;
        }
        else
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
