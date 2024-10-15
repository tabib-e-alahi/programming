#include<stdio.h>
int main()
{
    int t, a, b, i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&a, &b);
        if(a < b){
           printf("0\n");
        }
        else{
           printf("%d\n", a-b);
        }

    }
    return 0;
}

