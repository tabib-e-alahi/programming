#include<stdio.h>

int fibo(int n)
{
    if(n == 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    return fibo(n-1) + fibo(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
int nth_fibo = fibo(n);
    printf("%d\n", nth_fibo );
    return 0;
}

