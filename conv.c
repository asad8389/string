
#include<stdio.h>

int main()
{
    int i=0,b,num=0;
    char *p,a[10];

     puts("enter no stirng\n");
     gets(a);

     while(a[i]!='\0')
     {
         b=a[i];
         num=num*10+(b-48);     //conversion from ascii value to number
         printf("b=%d\n",b);
         i++;
     }

     printf("int is %d\n",num);



}
