#include <stdio.h>

int main()
{
    char t[80],s[80];int i,j=0;


    puts("enter a sentance");
    gets(s);

    for(i=0;i<80;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            continue;
        t[j]=s[i];
        j++;
    }
    t[i]='/0';
    puts(t);

}
