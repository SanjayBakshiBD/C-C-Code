 #include<stdio.h>
int main(){


    char d[100];
    char tmp[100];

    //scanf("%c", &d[0]);
    d[0] = getchar();
    d[1] = getchar();
    gets(tmp);
    printf("%c\n", d[0]);

    //scanf("%s", &d); (Input ends by pressing space)
    gets(d); //(Input ends by pressing enter)
    printf("%s\n", d);

    return 0;

}

