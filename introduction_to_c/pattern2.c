/*
        5 4 3 2 1
        4 3 2 1
        3 2 1
        2 1
        1
*/
#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d",&n);
    for(i = n; i>=1;i--)
    {
        for(j = i; j >=1; j--)
        {
            if(j == 1)
            {
                printf("%d\n",j);
            }
            else{
                printf("%d ",j);
            }
        }
    }

    return 0;
}


