#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = n-1; i >= 1; i--)
    {
        if(i == 1){
            printf("%d\n", a[i]);
        }
        else if(i % 2 != 0){
            printf("%d ", a[i]);
        }
    }

    return 0;

}
