/*
                      *
                   * * *
                * * * * *
              * * * * * * *

*/
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int gap = n-1;
    int start = 1;
    for(i=1; i<=n;i++)
    {
        for(j=1; j<=gap;j++){
            printf(" ");
        }
        for(j=1; j<=start; j++){
            printf("*");
        }
        printf("\n");
        gap--;
        start+=2;
    }
    return 0;
}
