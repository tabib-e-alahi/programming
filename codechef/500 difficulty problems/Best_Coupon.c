#include<stdio.h>
int main()
{
    int t, x, i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&x);
        if( x <= 1000)
        {
            printf("100\n");
        }
        else
        {
            printf("%d\n",x/10);
        }
    }
    return 0;
}


