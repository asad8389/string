
#include<stdio.h>
void xstrcon(char *,char *, char *);
int main()
{
    char a[10],b[10],c[25];

    puts("enter strings");
    gets(a);
    gets(b);

    xstrcon(c,a,b);

    printf("%s + %s = %s",a,b,c);

}
void xstrcon(char *r, char *p, char *q)
{
    while(*p!='\0')
    {
        *r=*p;
        p++;
        r++;
    }
    while(*q!='\0')
    {
        *r=*q;
        q++;
        r++;
    }

    *r='\0';
}
