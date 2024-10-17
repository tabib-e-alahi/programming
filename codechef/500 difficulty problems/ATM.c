#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %f",&x, &y);
    if( (x % 5 != 0) || x >= y){
        printf("%d\n",y);
       }
       else{
        printf("%.2f\n", y - (x + 0.5));
       }
    }
    return 0;
}




