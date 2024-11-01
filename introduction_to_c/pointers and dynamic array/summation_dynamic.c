#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int sum = 0;
    int *arr = (int *)malloc(n * sizeof(int));

    for(int i =0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    if(sum < 0){
        printf("%lld", (sum * -1));
    }
    else{
        printf("%lld", (sum));
    }

}



