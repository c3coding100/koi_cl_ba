#include <stdio.h>

int main()
{
    int a, b, c, sum, check[10] = { 0 };
    scanf("%d%d%d", &a, &b, &c);
    sum = a * b * c;
    while(1)
    {
        check[sum%10]++;
        if(sum < 10) break;
        else sum = sum/10;
    }
    for(int i = 0; i < 10; i++)
        printf("%d\n", check[i]);
    return 0;
}
