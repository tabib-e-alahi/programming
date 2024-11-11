#include<stdio.h>

int i, j, temp;

void swap_row(int n, int m[][n], int x, int y)
{
    for(i = 0; i < n; i++)
    {
        temp = m[x-1][i];
        m[x-1][i] = m[y-1][i];
        m[y-1][i] = temp;
    }
}

void swap_col(int n, int m[][n], int x, int y)
{
    for(i = 0; i < n; i++)
    {
        temp = m[i][x-1];
        m[i][x-1] = m[i][y-1];
        m[i][y-1]= temp;
    }
}

void display_matrix(int n, int m[][n])
{
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    int m[n][n];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    swap_row(n, m, x, y);
    swap_col(n, m, x, y);

    display_matrix(n, m);

    return 0;
}
