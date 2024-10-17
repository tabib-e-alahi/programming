#include<stdio.h>
int main()
{
    int t, i, x;
    scanf("%d", &t);
    for(i =1; i <= t; i++)
    {
        scanf("%d",&x);
        printf("%d\n", 100-x);
    }
    return 0;
}
