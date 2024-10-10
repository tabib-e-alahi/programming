// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include<stdio.h>
int main()
{
    int n,i;
    long long int sum=0;
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum += a[i];
    }
    if(sum < 0)
    {
        sum = sum * (-1);
    }
    printf("%lld\n",sum);
    return 0;
}
