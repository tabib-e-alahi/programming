#include<stdio.h>
int main()
{
    int m, zero=0, one = 0, i, n;
    scanf("%d",&m);
    for(i=1; i<=m; i++)
    {
        scanf("%d",&n);
        if(n == 0)
        {
            zero++;
        }
        else if(n == 1){
            one++;
        }
    }
    printf("%d %d",zero, one);
    return 0;
}

