#include<stdio.h>
int main()
{
    int n,i,x,y,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        printf("%d\n",(z-y)/x);
    }
    return 0;
}


