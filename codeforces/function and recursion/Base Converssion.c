#include<stdio.h>
int base_conversion(int n) // 11
{
    if (n == 0) {
            return;
    }
    base_conversion(n / 2);
    printf("%d", n % 2);
}
int main()
{
    int t, n;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d", &n);
        if(n == 0){
            printf("0\n");
        }
        else{
            base_conversion(n);
        printf("\n");
        }
    }
    return 0;
}

