#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int element = a[0][0];
    int flag = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                if(a[i][j] != element || a[i][j] == 0)
                {
                    flag = 0;
                    printf("%d %d\n",i, j);
                    break;
                }
            }
            else
            {
                if(a[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 0)
        {
            break;
        }
    }

    if(flag == 1)
    {
        printf("%d\n",flag);
        printf("This is a scalar matrix.\n");
    }
    else
    {
        printf("%d\n",flag);
        printf("This is not a scalar matrix.\n");
    }
    return 0;
}

