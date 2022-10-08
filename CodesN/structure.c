#include<stdio.h>
#include<string.h>
int main()
{
    struct Employee
    {
        char name[30];
        int age;
        float salary;
    };

    struct Employee employee1, employee2; // variable declaration
    struct Employee emp[30]; //array declaration


    gets(employee1.name);
    employee1.age = 40;
    employee1.salary = 23;

    gets(employee2.name);
    scanf("%d", &employee2.age);
    scanf("%f", &employee2.salary);

    printf("Employee 1\n");
    printf("%s\n", employee1.name);
    printf("%d\n", employee1.age);
    printf("%f\n", employee1.salary);


    printf("Employee 2\n");
    printf("%s\n", employee2.name);
    printf("%d\n", employee2.age);
    printf("%f\n", employee2.salary);


}
