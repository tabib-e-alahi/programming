#include<stdio.h>
int main()
{
    int n,i,x,y,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if((x < y && y < z) || (x > y && y > z)){
            printf("%d\n",y);
        }
       else if((x > y && x < z) || (x < y && x > z)){
            printf("%d\n",x);
        }
        else if((z < y && x < z) || (z > y && x > z)){
            printf("%d\n",z);
        }
    }
    return 0;
}

