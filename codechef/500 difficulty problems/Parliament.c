#include<stdio.h>
int main()
{
    int t, n, x, i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&n, &x);
        if(x >= n/2.0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}

