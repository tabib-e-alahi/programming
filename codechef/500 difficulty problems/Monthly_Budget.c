
#include<stdio.h>
int main()
{
    int t,n,m,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&n,&m);
        if(n >= m*30)
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
