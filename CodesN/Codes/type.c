




#include<stdio.h>
int main(){

int a,b;

scanf("%d",&a);
scanf("%d",&b);
printf("a=%d\n",a);
printf("b=%d\n",b);

int c;
c=a;
a=b;
b=c;

printf("a=%d\n",a);
printf("b=%d\n",b);
}
