#include<stdio.h>
int main()
{
    int t, i, x, y;
    scanf("%d", &t);
    for(i =1; i <= t; i++)
    {
        scanf("%d %d",&x, &y);
        if(x > y){
        printf("%d\n",x-y);
        }
        else
        {
            printf("%d\n", y - x);
        }
    }
    return 0;
}



