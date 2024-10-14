#include<stdio.h>
int main()
{
    long long int a,p,total,pie;
    scanf("%lld %lld",&a,&p);
    total = p + a*3;
    pie = total/2;
    printf("%lld\n", pie);
    return 0;
}


