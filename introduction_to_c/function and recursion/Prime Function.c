#include<stdio.h>

void prime(int n)
{
    int flag = 1;
    if(n == 1)
    {
        printf("NO\n");
        return;
    }
    for(int j = 2; j < n; j++)
    {
        if(n % j == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

int main()
{
    int t,n;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        prime(n);
    }
    return 0;
}

