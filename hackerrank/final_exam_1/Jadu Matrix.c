#include<stdio.h>
int main()
{
    int row, col, i, j;
    int flag = 1;
    scanf("%d %d", &row, &col);
    if(row != col){
        flag = 0;
    }
else{
     int a[row][col];
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(i == j)
            {
                if(a[i][j] != 1)
                {
                    flag = 0;
                    break;
                }
            }
            else if(i + j == (row - 1))
            {
                if(a[i][j] != 1)
                {
                    flag = 0;
                    break;
                }
            }
            else{
                if(a[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
         if(flag == 0){
            break;
         }
    }
}
    if(flag == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}

