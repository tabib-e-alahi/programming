// problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include<stdio.h>
int main()
{
    int n,i,j=0,c=0;
    scanf("%d",&n);
    int a[n],b[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=n-1; i>=0; i--)
    {
        b[j++] = a[i];
    }
     for(i=0; i<n; i++)
    {
        if(a[i] == b[i])
        {
            c++;
        }
    }
    if( c == n)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}


