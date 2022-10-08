//This programme reads from file and give output on console
#include<stdio.h>
int main()
{

   FILE *fileptr;
   fileptr = fopen("Student.txt","r");
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
            fgets(name, 11, fileptr); //fgets is for taking line input from file
            printf("%s", name);
       }

       fclose(fileptr);
   }

    return 0;
}

