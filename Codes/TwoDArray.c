#include<stdio.h>
int main()
{
    int column, row;
    printf("Input the size of column ");
    scanf("%d", &column);

    printf("Input the size of row ");
    scanf("%d", &row);
    int array[column][row];

    int b=0;
    int a = 0;
    while(a<row)
    {
        b = 0;
        while(b<column){

            scanf("%d", &array[b][a]);
            b=b+1;
        }
        a++;
    }


    a=0;
    b=0;
    while(a<row)
    {
        b = 0;
        while(b<column){
            printf("%d ", array[b][a]);
            b=b+1;
        }
        printf("\n");
        a++;
    }


    return 0;
}

