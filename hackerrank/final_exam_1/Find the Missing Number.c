#include<stdio.h>
int main()
{
    int t, a, b, c;
    long long int mul;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        scanf("%lld %d %d %d", &mul, &a, &b, &c);
        long long int x = a * b * c;
        if(mul % x != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", mul / x);
        }
    }
    return 0;
}

