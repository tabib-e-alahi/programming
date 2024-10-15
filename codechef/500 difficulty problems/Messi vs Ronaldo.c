#include<stdio.h>
int main()
{
    int a, b, x, y, m, r;
    scanf("%d %d %d %d",&a, &b, &x, &y);
    m = 2 * a + b;
    r = 2 * x + y;
    if(m > r){
        printf("Messi\n");
    }
   else if(m < r){
        printf("Ronaldo\n");
    }
    else{
        printf("Equal\n");
    }
    return 0;
}
