#include<stdio.h>
int main()
{
    int t, i, x, y;
    scanf("%d",&t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d %d",&x, &y);
        printf("%d\n", (x + (x *10)/100) - (x - y));
    }
    return 0;
}

