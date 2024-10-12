#include<stdio.h>
int main()
{
    int n, i, x, y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if(y % x == 0)
        {
            printf("%d\n",(y/x)-1);
        }
        else if(y % x > 0)
        {
            printf("%d\n",(y/x));
        }
        else{
            printf("0\n");
        }
    }
    return 0;
}
