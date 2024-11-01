#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a, b;
    scanf("%d %d", &a, &b);
    int *p = &a, *q = &b;
    printf("%d\n",abs(*p - *q));
    return 0;
}
