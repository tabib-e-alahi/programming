#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1; i<=n;i++)
    {
        for(j=1; j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    int space = 1, num = n-1;
     for(i=1; i<=n-1;i++)
    {
        for(j=1; j<=space; j++){
            printf(" ");
        }

        for(j=1; j<=num;j++){
            printf("%d",j);
        }
        space++;
        num--;
        printf("\n");
    }
    return 0;
}
