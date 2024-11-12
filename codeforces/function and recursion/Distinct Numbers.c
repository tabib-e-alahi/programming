#include<stdio.h>

int distinct_count(int a[], int n)
{
    int f[1001] = {0}, count = 0;
    for(int  i = 0; i < n; i++)
    {
        f[a[i]] = 1;
    }

    for(int  i = 0; i < 1001; i++)
    {
        if(f[i] == 1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = distinct_count(a, n);

    printf("%d\n", count);
    return 0;
}
