#include<stdio.h>
int main()
{
    int n,i,w,x,y,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d %d",&w, &x, &y, &z);
        printf("%d\n", w+(x-y)*z);
    }
    return 0;
}

