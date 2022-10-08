//This programme reads from student.txt  file and give output in result.txt file
#include<stdio.h>
int main()
{

   FILE *fileptr, *file;
   fileptr = fopen("Student.txt","r");
   file = fopen("result.txt", "w");
   char name[30];
   //This line checks if fileptr is not pointing to any file
   if(fileptr == NULL)
   {
        printf("file not found\n");
   }
   else
   {
       printf("file found\n");
       while(!feof(fileptr)) //feof is for taking input from file as long as there is data in that file
       {
            fgets(name, 20, fileptr); //fgets is for taking line input from file
            //printf("%s", name);
            fputs(name, file);
       }

       fclose(fileptr);
       fclose(file);
   }

    return 0;
}

