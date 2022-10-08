 #include<stdio.h>
int main()
{
    FILE *fileptr;
    fileptr = fopen("student.txt", "a");
    char name[20];
    int age;

    if(fileptr)
    {
        printf("File found\n");
        printf("give name\n");
        gets(name);
        printf("give age\n");
        scanf("%d", &age);
        fputs("\n", fileptr);
        //fputs(name, fileptr);
        fprintf(fileptr, "%s", name);
        fputs("\n", fileptr);
        //fputs(age, fileptr);
        //fputs("\n", fileptr);
        fprintf(fileptr, "%d", age);
        fputs("\n", fileptr);
         fputs("hello", fileptr);
           //fputs("\n", fileptr);
        fclose(fileptr);

    }

    else{
        printf("file not found\n");
    }
    return 0;
}
