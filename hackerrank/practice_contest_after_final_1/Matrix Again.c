#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < m; i++)
    {
        if(i == m-1)
        {
            printf("%d\n", a[n-1][i]);
        }
        else
        {
            printf("%d ", a[n-1][i]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(i == n-1)
        {
            printf("%d\n", a[i][m-1]);
        }
        else
        {
            printf("%d ", a[i][m-1]);
        }
    }

    return 0;

}

