#include <stdio.h>

int calcSugar(int nn)
{
    int kg3 = 0;
    while(1)
    {
        if(nn % 5 == 0)
        {
            return (nn/5 + kg3);
        }else if(nn < 0)
        {
            return -1;
        }
        nn -= 3;
        kg3++;
    }
    return  kg3;
}

int main()
{
    int n;
    scanf("%d",&n);

    printf("%d", calcSugar(n));

    return 0;
}
