#include<stdio.h>

int max_number(int ar[], int n)
{
    int max = ar[0];
    for(int i=1; i < n; i++)
    {
        if(ar[i] > max){
            max = ar[i];
        }
    }

    return max;
}

int min_number(int ar[], int n)
{
    int min = ar[0];
    for(int i=1; i < n; i++)
    {
        if(ar[i] < min){
            min = ar[i];
        }
    }

    return min;
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
    printf("%d %d\n", min_number(a, n), max_number(a, n));

    return 0;
}
