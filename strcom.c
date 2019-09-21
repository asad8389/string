#include<stdio.h>
int xstrcmp(char *, char *);
int main()
{
    char a[10],b[10];
    int c;

    puts("enter two strings\n");
    gets(a);
    gets(b);

    c=xstrcmp(a,b);

    printf("%d\n", c);

    if(c==0)
        printf("strings are same\n");
    else
        printf("different");

}
int xstrcmp(char *a, char *b)
{
    while(*a==*b)
    {
        a++;
        b++;

    }

    if(*a!='\0'||*b!='\0')
       return *a-*b;
    else
        return 0;

}
