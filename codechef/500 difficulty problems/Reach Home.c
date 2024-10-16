#include<stdio.h>
int main()
{
    int t, i, x, y;
    scanf("%d",&t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d %d",&x, &y);
        if((x * 5) >= y){
            printf("YES\n");
        }
        else{
            printf("N\n");
        }
    }
    return 0;
}
