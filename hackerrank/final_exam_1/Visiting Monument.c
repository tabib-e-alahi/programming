#include<stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        for(int j = 1; j <= n; j++){
            printf("%d ", j);
        }
        for(int k = n-1; k >= 1; k--){
            if(k == 1){
                printf("%d", k);
            }
            else{
                printf("%d ", k);
            }
        }
        printf("\n");
    }
    return 0;
}
