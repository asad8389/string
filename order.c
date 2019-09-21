#include<stdio.h>

int main()
{
    char p[][10]={
                "asad",
                "shahzaib",
                "daniyal",
                "anas",
                "khan",
                "ali"
              };
    char temp;
    int i,j,k;
    for(k=0;k<5;k++){
    for(i=0;i<5;i++)
    {
        if(p[i][0]>p[i+1][0])
        {
            for(j=0;j<8;j++)
            {
                temp=p[i][j];
                p[i][j]=p[i+1][j];
                p[i+1][j]=temp;
            }
        }
        /*else if(p[i][0]==p[i+1][0])
        {
            if(p[i][1]>p[i+1][1])
            {
                 temp=p[i][j];
                p[i][j]=p[i+1][j];
                p[i+1][j]=temp;
            }
        }*/

    }}

    for(i=0;i<6;i++)
    {
        printf("%s\n",&p[i][0]);
    }
}
