#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    a = n  / 100;
    a = a % 10;
    printf("%d\n", a);
    return 0;
}

