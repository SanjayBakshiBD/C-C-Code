#include<stdio.h>
int main()
{
    FILE *fileptr;
    fileptr = fopen("D:\\student.txt", "w");
    char name[20];

    if(fileptr)
    {
        printf("File found\n");

        fputs("name", fileptr);
        fputs("\n", fileptr);
        fputs("hello", fileptr);


        fclose(fileptr);

    }

    else{
        printf("file not found\n");
    }
    return 0;
}

