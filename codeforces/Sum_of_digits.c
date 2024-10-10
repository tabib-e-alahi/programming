// problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
#include<stdio.h>
int main()
{
    int n,i;
    int sum=0;
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
    {
        scanf("%1d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum += a[i];
    }
    printf("%d\n",sum);
    return 0;
}
