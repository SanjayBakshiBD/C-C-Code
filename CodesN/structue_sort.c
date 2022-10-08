#include<stdio.h>
int main()
{
    struct Employee
    {
        char name[20];
        int age;
        float salary;
    };
    struct Employee employee[3], temp;
    int i, j;
    char tmp;

    for(i=0; i<3; i++)
    {
        printf("Give name of %d employee\n", i+1);
        gets(employee[i].name);
        printf("Give age of %d employee\n", i+1);
        scanf("%d", &employee[i].age);
        printf("Give salary of %d employee\n", i+1);
        scanf("%f", &employee[i].salary);
        scanf("%c", &tmp);
    }

    printf("\nOutput\n");

    for(i=0; i<3; i++)
    {
        printf("%s\n", employee[i].name);
        printf("%d\n", employee[i].age);
        printf("%f\n\n", employee[i].salary);

    }

    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(employee[i].salary < employee[j].salary)
            {
                temp = employee[i];
                employee[i]=employee[j];
                employee[j]=temp;
            }
        }
    }
    printf("\nOutput after sort\n");

    for(i=0; i<3; i++)
    {
        printf("%s\n", employee[i].name);
        printf("%d\n", employee[i].age);
        printf("%f\n\n", employee[i].salary);

    }
    /*int a[4]={3,7,6,2};
    int b,c,tmp,d;
    for(b=0;b<4;b++)
    {
        printf("%d ",a[b]);
    }
    printf("\n");
     for(b=0;b<4;b++)
    {
       for(c=b+1;c<4;c++)
            {
                if(a[b] < a[c])
                {
                    tmp=a[b];
                    a[b]=a[c];
                    a[c]=tmp;
                }
            }
            /*for(d=0;d<4;d++)
            {
                printf("%d ", a[d]);
            }
           printf("\n");

    }
    for(b=0;b<4;b++)
    {
        printf("%d ",a[b]);
    }
    printf("\n");*/



    return 0;
}

