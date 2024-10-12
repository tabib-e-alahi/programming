#include<stdio.h>
int main()
{
    int n, i, x, y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if(x <= 6){
            printf("%d\n",y);
        }
        else if(x % 6 == 0){
            x = x/6;
            printf("%d\n",y*x);
        }
        else{
            x = x/6 + 1;
            printf("%d\n",y*x);
        }
    }
    return 0;
}

