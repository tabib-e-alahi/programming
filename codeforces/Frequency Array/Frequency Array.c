#include<stdio.h>
int f[100005];
int main()
{
    int n, m, i;
    scanf("%d %d",&n,&m);
    int a[n+5];
    for(i=0; i < n; i++){
        scanf("%d",&a[i]);

        f[a[i]] += 1;
    }
    for(i=1; i<=m; i++){
        printf("%d\n",f[i]);
    }
    return 0;
}
