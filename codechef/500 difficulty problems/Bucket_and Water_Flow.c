#include<stdio.h>
int main()
{
    int n,i,w,x,y,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d %d",&w, &x, &y, &z);
        if((x-w) == y * z)
        {
            printf("filled\n");
        }
        else if((x-w) < y * z){
            printf("overFlow\n");
        }
        else{
            printf("Unfilled\n");
        }
    }
    return 0;
}

