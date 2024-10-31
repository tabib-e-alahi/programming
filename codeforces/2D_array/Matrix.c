#include<stdio.h>
#include<math.h>
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

    int main = 0, sec = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                main += a[i][j];
            }

            if(i + j == n - 1)
            {
               sec += a[i][j];
            }

        }
    }

    printf("%d\n", abs(main - sec));
    return 0;
}


