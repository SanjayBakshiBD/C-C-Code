/*This programme takes input from marks.txt file, sorts them and
write the sorted data in the same file
*/
#include<stdio.h>
int main()
{
    struct student{
        int roll;
        char name[20];
        int marks;

    };

    struct student stu[4], temp;
    int i = 0, j;
    char tmp[80];
    FILE *fileptr;
    fileptr = fopen("marks.txt", "r");

    if(fileptr == NULL)
    {
        printf("file not found\n");
    }

    else
    {
       printf("file found\n");
       fscanf(fileptr, "%s", tmp);
       fscanf(fileptr, "%s", tmp);
       fscanf(fileptr, "%s", tmp);
       while(!feof(fileptr)) //feof is for taking input from file as long as there is data in that file
       {
            fscanf(fileptr, "%d", &stu[i].roll);
            fscanf(fileptr, "%s", &stu[i].name);
            fscanf(fileptr, "%d", &stu[i].marks);
            i++;

       }
       fclose(fileptr);

        for(i=0; i<4; i++)
        {
            for(j=i+1; j<4; j++)
            {
                if(stu[i].marks<stu[j].marks)
                {
                    temp = stu[i];
                    stu[i] = stu[j];
                    stu[j] = temp;
                }
            }
        }

        /*for(i=0;i<4;i++)
        {
            printf("%d ", stu[i].roll);
            printf("%s ", stu[i].name);
            printf("%d\n", stu[i].marks);
        }*/

        fileptr = fopen("marks.txt", "w");
        for(i=0;i<4;i++)
        {
            fprintf(fileptr, "%d ", stu[i].roll);
            fprintf(fileptr, "%s ", stu[i].name);
            fprintf(fileptr, "%d\n", stu[i].marks);
        }
        fclose(fileptr);
    }



    return 0;
}

