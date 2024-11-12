#include<stdio.h>

void count_before_one(int a[], int n)
{
    for(int i = n - 1; i >= 0; i--){
        if(i == 0){
            printf("%d\n", a[i]);
        }
        else{
            printf("%d ", a[i]);
        }
    }

}

int main()
{
    int n, x, v;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d %d", &x, &v);
    a[x] = v;

    count_before_one(a, n);

    return 0;
}

