#include<stdio.h>
#include<string.h>
int main()
{
    char str[]={
                    "we will teach you how to"
                   // "move a mountain",
                   // "level a building",
                   // "erase the past",
                   // "all through c"

                    };


     char *p;
     char str1[5]="you";
     p=strstr(str,str1);
    if(*p)
     printf("found at %s\n",*p);
     else
        printf("not found");

     //*p="fuck";

     printf("%s\n",str);
 /*   char *p,str1[100],str2[10];
    int i,j,a,flag;

    puts("enter A STRING");
    gets(str1);
    puts("enter 2 STRING");
    gets(str2);
    p=str2;
    j=0;
    flag=0;
    for(i=0;i<5;i++)
    {
      // for(j=0;j<6;j++)

        {
         // printf("%s\n",str[i]);
                a=strcmp(str1,str[i]);

                if(a==0)
                  {
                    printf("found at (%d)",i);
                    str[i]=p;
                    flag=1;
                    break;
                  }
        }
    }
    if(flag==0)
    printf("Not found");


      for(i=0;i<5;i++)
      {
         printf("%s\n",str[i]);
      }*/









}
