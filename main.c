#include <stdio.h>
#include<stdlib.h>
int xstrlen(char *);
int main()
{
    char  a[20];
    int len;

    puts("enter name");
    gets(a);


    len=xstrlen(a);

    printf("len is %d",len);


}
int xstrlen(char *p)
{
    int i=0;
    while(*p!='\0')
    {
        i++;
        p++;
    }
    return i;
}
