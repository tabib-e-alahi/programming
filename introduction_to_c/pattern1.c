/*
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
        ---------
        --------- goes on depends on n;
*/

#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j = 1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

