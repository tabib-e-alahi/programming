
#include<stdio.h>
int main()
{
    int n, i, x, y, z;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if((y - z) >= x)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

    }

    return 0;
}
