#include<stdio.h>
int main()
{
    int a, b;
    int *x;
    x = &a;
    scanf("%d", &a);
    printf("intially a = %d\n", a);
    printf("location of a = %d\n", &a);
    printf("before increasing value x = %d\n", x);
    *x = *x+1; //a = a+1
    printf("after increasing value x = %d\n", x);
    printf("after increasing value a = %d\n", a);

    x = x+1;
    printf("\nx = %d\n", x);
    printf("%d\n", *x);




    b = 10;
    printf("b = %d\n", b);
    printf("Location of b = %d\n", &b);
   int array[10] = {2,4,3,78,5,9,1,7,70,21};
   int *p;
   p = &array;
   printf("%d\n", array[0]);
   printf("%d\n", *p);
   printf("location of array[0] %d\n", &array[0]);
   printf("location of pointer %d\n", p);
   p = p+9;
   printf("location of pointer %d\n", p);
   printf("value of p is %d\n", *p);

    return 0;
}
