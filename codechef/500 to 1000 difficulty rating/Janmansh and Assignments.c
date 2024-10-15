#include<stdio.h>
int main()
{
    int t, n, i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        if(10 - n >= 3 ){
           printf("YES\n");
        }

        else{
           printf("NO\n");
        }
    }
    return 0;
}



