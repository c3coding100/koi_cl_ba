#include <stdio.h>
int d[1010];

int subsetsum(int s, int e)
{
    int sum = 0;
    for(int i=s; i<=e; i++)
        sum += d[i];
    return sum;
}

int main()
{
    int a, b, n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        scanf("%d", &d[i]);

    scanf("%d%d", &a, &b);

    printf("%d\n", subsetsum(a, b));
}
