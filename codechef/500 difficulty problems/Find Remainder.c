#include<stdio.h>
int main()
{
    int t, k, x, i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&k, &x);
        printf("%d\n", k % x);
    }
    return 0;
}

