#include<stdio.h>
int main()
{
    int n,i,c,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&c,&x,&y);
        printf("%d\n",(c-x)*y);
    }

    return 0;
}
