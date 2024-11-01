#include<stdio.h>
#define max_limit 100001
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    int f[max_limit] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        f[arr[i]] += 1;
    }

    for(int i = 0; i < max_limit; i++)
    {
        if(f[i] == 1){
                count++;
        }
    }
    printf("%d\n",count);
    return 0;
}



