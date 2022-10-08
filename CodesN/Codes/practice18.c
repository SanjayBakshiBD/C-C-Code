#include<stdio.h>
int main()
{

  char a[20]="kfruseaclvbduepf";
  int length=0;
  int b,c,tmp,d;
  for(b=0;a[b] != '\0';b++)
  {
     length++;
  }
  printf("%d\n", length);
  for(c=0;c<length;c++)
  {
      for(d=c+1;d<length;d++)
      {
          if(a[d] < a[c])
          {
             tmp=a[c];
             a[c]=a[d];
             a[d]=tmp;
          }
      }
  }
printf("%s\n", a[b]);
    return 0;
}

