// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B


#include<stdio.h>
int main()
{
    int n,i,x,c=0;
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0; i<n; i++)
    {
        if(a[i] == x)
        {
            c++;
            printf("%d\n",i);
            break;
        }
    }
    if(c == 0){
        printf("-1\n");
    }
    return 0;
}
