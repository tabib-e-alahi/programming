#include<stdio.h>
int main()
{
    int t, x, n,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&x, &n);
        printf("%d\n", (x/10) * n);
    }
    return 0;
}

