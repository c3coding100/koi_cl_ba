#include <stdio.h>

int main()
{
    char string[101];
    scanf("%s", string);
    for(int i = 0; string[i] != '\0'; i++)
    {
        if(i != 0 && i % 10 == 0)
            printf("\n");
        printf("%c", string[i]);
    }
}
