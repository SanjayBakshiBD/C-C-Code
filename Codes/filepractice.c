#include<stdio.h>
int main()
{
    struct student
    {
        int roll;
        char name[30];
        int marks;
    };
    struct student stu[4],temp;
    int i=0, j;
    int tmp[30];
    FILE *fileptr;
    fileptr=fopen("marks.txt", "r");

    if(fileptr == NULL)
    {
        printf("File not found\n");
    }
    else
    {
        printf("File found\n");
        fscanf(fileptr, "%s", &tmp);
        fscanf(fileptr, "%s", &tmp);
        fscanf(fileptr, "%s", &tmp);

        while(!feof(fileptr))
        {
            fscanf(fileptr, "%d", stu[i].roll);
            fscanf(fileptr, "%s", stu[i].name);
            fscanf(fileptr, "%d", stu[i].marks);
            i++;
        }
        fclose(fileptr);

        for(i=0;i<4;i++)
        {
            for(j=i+1;j<4;j++)
                if(stu[i].marks > stu[j].marks)
            {
                temp=stu[i];
                stu[i]=stu[j];
                stu[j]=temp;
            }
        }

    }

    fileptr=fopen("marks.txt", "w");
    for(i=0;i<4;i++)
    {
        fprintf(fileptr, "%d", stu[i].roll);
        fprintf(fileptr, "%s", stu[i].name);
        fprintf(fileptr, "%d", stu[i].marks);
    }
    fclose(fileptr);




    return 0;
}
