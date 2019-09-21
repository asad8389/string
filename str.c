#include<stdio.h>

int main()
{
    char a[50];
    int i,n;

    puts("enter string\n");
    gets(a);

    printf("enter position\n");
    scanf("%d",&n);

    puts("remaining string is:\n");
    i=n-1;
    while(a[i]!=' ')
    {
        printf("%c",a[i]);
        i++;
    }



}
