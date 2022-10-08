#include<stdio.h>
int main()
{
    struct Employee
    {
        char name[20];
        int age;
        float salary;
    };
    struct Employee employee[3];
    int i;
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
    for(i=0; i<3; i++)
    {
        printf("%s\n", employee[i].name);
        printf("%d\n", employee[i].age);
        printf("%f\n", employee[i].salary);
       // printf("\n");

    }
    return 0;
}
