#include<stdio.h>
int main()
{
    int t, i, x;
    scanf("%d",&t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d %d",&x);
       if( x > 20){
        printf("HOT\n");
       }
       else{
        printf("COLD\n");
       }
    }
    return 0;
}



