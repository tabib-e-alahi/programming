#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int row_first = (n / 2) + 6;

    for(int i =1; i <= row_first; i++)
    {
        for(int j = 1; j <= row_first - i; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i =1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
