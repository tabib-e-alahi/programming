#include<stdio.h>
int main()
{
    int t,a,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&a);
        if(a <= 30)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}

