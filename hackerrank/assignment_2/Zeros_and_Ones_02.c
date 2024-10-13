#include<stdio.h>
int main()
{
    int n, i, x;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    if(a[x-1] == 0){
        a[x-1] = 1;
    }
    else {
        a[x-1] = 0;
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

