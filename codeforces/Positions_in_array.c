// problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
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
        if(a[i] <= 10)
        {
            printf("A[%d] = %d\n",i,a[i]);
        }
    }
    return 0;
}

