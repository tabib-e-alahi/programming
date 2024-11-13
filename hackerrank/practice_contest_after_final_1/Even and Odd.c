#include<stdio.h>
void odd_even()
{
    int n, o = 0, e = 0;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            o++;
        }
        else{
            e++;
        }
    }

    printf("%d %d\n", e, o);
}

int main()
{
    odd_even();
    return 0;
}


