#include<stdio.h>
int main()
{
    int n, m, x, y;
    scanf("%d %d %d", &n, &m, &x);
    int arr[n][m];
    int f[1001] = {0};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            f[arr[i][j]] += 1;
        }
    }

    for(int i = 0; i < x; i++)
    {
        scanf("%d", &y);
        printf("%d\n",f[y]);
    }
    return 0;
}


