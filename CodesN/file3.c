#include<stdio.h>
int main()
{
   FILE *fileptr;
   fileptr = fopen("Student.txt","a");
   char name[30] = "sanjay bakshi";
   if(fileptr)
   {
       printf("file found\n");
       fputs(name, fileptr);
       fputs("\n", fileptr);
       fputs("Ilove my country",fileptr);
       fputs("\n", fileptr);
       fclose(fileptr);
   }
   else
   {
       printf("file not found\n");
   }

    return 0;
}
