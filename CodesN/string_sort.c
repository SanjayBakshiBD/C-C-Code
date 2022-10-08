#include<stdio.h>
#include<string.h>
int main()
{
  char a[20] = "drter";
  char b[20] = "abc";


  printf("%d\n", strcmp(a,b));

  if(strcmp(a,b) == 0)
  {
      printf("yes\n");
  }


    return 0;

}
