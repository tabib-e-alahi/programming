#include<stdio.h>
int main()
{
    int n, m, row, col, temp;
    scanf("%d %d", &n, &m);
    int a[n][m];

    for(row = 0; row < n; row++){
        for(col = 0; col < m; col++){
            scanf("%d", &a[row][col]);
        }
    }
// col swap
    for(row = 0; row < n; row++){
        temp = a[row][0];
        a[row][0] = a[row][m-1];
        a[row][m-1] = temp;
    }
// row swap
    for(col = 0; col < m; col++){
        temp = a[0][col];
        a[0][col] = a[n-1][col];
        a[n-1][col] = temp;
    }

    for(row = 0; row < n; row++){
        for(col = 0; col < m; col++){
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }
}
