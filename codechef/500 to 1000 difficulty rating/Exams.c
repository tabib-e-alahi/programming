#include<stdio.h>
int main()
{
    int t, x, y, z, i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&x, &y, &z);
        if((x * y) / 2.0 < z ){
           printf("YES\n");
        }
        else{
           printf("NO\n");
        }
    }
    return 0;
}




