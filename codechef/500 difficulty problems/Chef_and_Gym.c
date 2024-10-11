#include<stdio.h>
int main()
{
    int t, x, y, z,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&x, &y, &z);
        if( x + y <= z)
        {
            printf("2\n");
        }
        else if(x <= z)
        {
            printf("1\n");
        }
        else{
            printf("0");
        }
    }
    return 0;
}



