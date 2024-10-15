#include<stdio.h>
int main()
{
    int t, a, b, i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&a, &b);
        if(a > b){
            printf("NEW PHONE\n");
        }
        else if(a < b){
            printf("REPAIR\n");
        }
        else{
            printf("ANY\n");
        }
    }
    return 0;
}





