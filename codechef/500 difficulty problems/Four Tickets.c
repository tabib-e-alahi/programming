#include<stdio.h>
int main()
{
    int t, a i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&a);
        if(4*a <= 1000){
           printf("YES\n");
        }
        else{
           printf("NO\n");
        }

    }
    return 0;
}

