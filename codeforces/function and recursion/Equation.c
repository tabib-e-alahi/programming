#include<stdio.h>
#include<math.h>

void equation(int x, int n)
{
    int result = 0;
    for(int i = 2; i <= n; i=i+2)
    {
        result += pow(x,i);
        printf("%d when i = %d\n", result, i);
    }
    printf("%d\n", result);
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    equation(a,b);
    return 0;
}
