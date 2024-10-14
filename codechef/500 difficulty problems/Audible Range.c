#include<stdio.h>
int main()
{
    int n, i, x;
    scanf("%d",&n);
    for(i = 1; i<=n; i++)
    {
        scanf("%d",&x);
        if(x >= 67 && x <= 45000)
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

