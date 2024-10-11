#include<stdio.h>
int main()
{
    int n,i,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if(y <= (x*1.07))
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}

