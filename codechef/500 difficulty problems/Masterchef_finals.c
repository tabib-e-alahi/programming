#include<stdio.h>
int main()
{
    int t, x, i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&x);
        if( x <= 10)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}


