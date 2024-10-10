// problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
#include<stdio.h>
int main()
{
    int n,i,lowest,index = 0;
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    lowest = a[index];

    for(i=1; i<n; i++)
    {
        if(a[i] < lowest)
        {
            lowest = a[i];
            index = i;
        }
    }
    printf("%d %d\n",lowest,index+1);
    return 0;
}

