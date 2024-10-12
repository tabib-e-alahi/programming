#include<stdio.h>
int main()
{
    int n,i,x,j;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d",&x);
        int c = 0;
        if(x == 1)
        {
            printf("no\n");
            continue;
        }
        for(j=2;j<x;j++)
        {
            if(x % j == 0)
            {
                c++;
            }
        }
        if(c > 0)
        {
            printf("no\n");
            printf("%d\n",c);
        }
        else{
            printf("yes\n");
            printf("%d\n",c);
        }

    }
    return 0;
}
