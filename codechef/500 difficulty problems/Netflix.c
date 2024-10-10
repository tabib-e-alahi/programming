#include<stdio.h>
int main()
{
    int n, a, b, c, x, i;
    scanf("%d",&n);
    for (i = 1;i<=n; i++)
    {
        scanf("%d %d %d %d",&a, &b,&c, &x);
        if (a+b >= x ||  a+c >= x || c+b >= x)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
