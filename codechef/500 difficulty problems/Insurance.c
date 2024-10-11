#include<stdio.h>
int main()
{
    int n, i, x, y;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d %d",&x,&y);
        if(x > y)
        {
            printf("%d\n",y);
        }
        else if(x <= y)
        {
            printf("%d\n",x);
        }

    }

    return 0;
}
