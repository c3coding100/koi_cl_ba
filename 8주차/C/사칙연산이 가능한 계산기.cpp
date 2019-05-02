#include <stdio.h>

int plus(int n, int m){
    return n+m;
}

int minus(int n, int m){
    return n-m;
}

int multiply(int n, int m){
    return n*m;
}

int divide(int n, int m){
    return n/m;
}

int main(){
    int n, m;
    char a;
    scanf("%d%c%d", &n, &a, &m);
    printf("%d%c%d=", n, a, m);

    if(a=='+')
        printf("%d", plus(n,m));
    if(a=='-')
        printf("%d", minus(n,m));
    if(a=='*')
        printf("%d", multiply(n,m));
    if(a=='/')
        printf("%d", divide(n,m));

    return 0;
}
