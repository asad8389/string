#include<string.h>
#include<stdio.h>

int main()
{
    char first[10]="a",second[10]="b",next[100],ex[10];
    int n,i;

    printf("enter no of rep");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        if(i==0)
             printf("%s  ",first);
        else if(i==1)
             printf("%s  ",second);
        else
        {
            strcpy(ex,second);
            strcat(second,first);
            strcpy(first,ex);
            printf("%s  ",second);

        }
    }
}
