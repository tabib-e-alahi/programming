// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i] > 0)
        {
            a[i] = 1;
        }
        else if(a[i] < 0)
        {
            a[i] = 2;
        }
    }
    for(i = 0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
