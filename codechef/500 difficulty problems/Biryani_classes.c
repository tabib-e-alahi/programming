#include<stdio.h>
int main()
{
    int t, x, y, i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&x,&y);
        printf("%d\n",x*y);
    }
}
