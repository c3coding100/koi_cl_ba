#include <stdio.h>

int d[1010];

int maxi(int aa,int bb)
{
    int i,max=d[aa],maxp=aa;
    for(i=aa ; i<=bb ; i++){
        if(d[i]>max){
            max=d[i];
            maxp=i;
        }
    }
    return maxp;
}

int main()
{
    int n, a, b;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        scanf("%d", &d[i]);

    scanf("%d%d", &a, &b);
    printf("%d\n", maxi(a, b));

    return 0;
}
