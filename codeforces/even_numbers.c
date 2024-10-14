#include<stdio.h>
int main()
{
    long long n,sum,i;
    scanf("%lld",&n);
    sum = n / 2;
    sum = sum * (sum + 1);
    printf("%lld\n", sum);
    return 0;
}

