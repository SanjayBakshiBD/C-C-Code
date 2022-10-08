#include<stdio.h>
int main(){
    int array[] = {1, 34, 2, 5, 56, 78, 90, 13, 143, 19, 97, 33};
    int s = 0;
    int a;
    int b;

    while(s<12)
    {
        a = array[s];

        int c=2;

        if(a==1)//corner case
        {
            printf("not primal\n");
            s++;
            continue;

        }
        b=0;
        while(c<a)
        {
            if(a%c==0)
            {
                 b = 1;
              printf("not primal\n");
                break;
            }
            c++;
        }
        if (b != 1)
        {
            printf("primal\n");
        }
        s++;
    }


    return 0;

}
