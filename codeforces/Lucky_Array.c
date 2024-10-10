// problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
#include<stdio.h>
int main()
{
    int n,i,lowest,c = 0;
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    lowest = a[0];

    for(i=1; i<n; i++)
    {
        if(a[i] < lowest)
        {
            lowest = a[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i] == lowest)
        {
           c++;
        }
    }
    if(c % 2 != 0)
    {
            printf("Lucky\n");
    }
    else{
        printf("Unlucky\n");
    }
    return 0;
}

