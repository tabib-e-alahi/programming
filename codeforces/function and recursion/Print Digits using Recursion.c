#include<stdio.h>
void print_digits(int n)
{
    if(n <= 9)
    {
        printf("%d",n);
        return;
    }
    print_digits(n / 10);
    printf(" %d",n % 10);
}
int main()
{
    int t, n;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d", &n);
        print_digits(n);
        printf("\n");
    }
}
