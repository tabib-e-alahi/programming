// Hasn't been solved yet......................

#include<stdio.h>
int main()
{
    int n,i,x,j;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d",&x);
        char a[x];
        int l=0,s=0;
        for(j=0; j<x; j++)
        {
            scanf("%s",a);
            if(a == 'LTIME108')
            {
                l++;
            }
            else if(a == 'START38')
            {
                s++;
            }
        }
        printf("%d %d\n",s,l);
    }
    return 0;
}

