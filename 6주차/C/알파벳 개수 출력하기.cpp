#include <stdio.h>
#include <string.h>
int main()
{
    int len, i;
    int chk[255]={0};
    char str[91];
    gets(str);
    len = strlen(str);
    for(i = 0;i < len; i++)
    {
        chk[str[i]]++;
    }

    for(i = 'a'; i <= 'z'; i++)
    {
        printf("%c:%d\n",i, chk[i]);
    }
}





