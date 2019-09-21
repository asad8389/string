#include<stdio.h>
void xstrcpy(char *, char *);
int main()
{
    char a[10],b[10];

    puts("enter string");
    gets(a);

    xstrcpy(b,a);

    printf("source is %s\n",a);
    printf("target is %s\n",b);


}
void xstrcpy(char *t, char *s)
{
    while(*s!='\0')
    {
        *t=*s;
        t++;
        s++;
    }
    *t='\0';
}
