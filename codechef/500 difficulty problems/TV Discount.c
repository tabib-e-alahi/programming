#include<stdio.h>
int main()
{
    int t, a, b, c, d, i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d %d",&a, &b, &c, &d);
        if(a-c < b-d){
            printf("First\n");
        }
        else if(a-c > b-d){
            printf("Second\n");
        }
        else{
            printf("Any\n");
        }
    }
    return 0;
}




