#include<stdio.h>
int main()
{
    int n, i, x, y, z;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x*10 > y)
        {
            printf("%d\n",y*z);
        }
        else if(x*10 <= y)
        {
            printf("%d\n",x*10*z);
        }

    }

    return 0;
}
