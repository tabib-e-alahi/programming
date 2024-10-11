#include<stdio.h>
int main()
{
    int n,i,x,y,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d", &x, &y, &z);

        if (x > y + z || y > x + z || z > x + y)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}


