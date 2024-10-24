#include<stdio.h>
int main()
{
    int n, x, y, i, p, c =0;
    scanf("%d %d %d",&n,&x, &y);
    for(i=1; i <= n; i++){
        scanf("%d",&p);
       if(x <= p  && p <= y){
           c++;
        }
    }
    printf("%d\n",c);
    return 0;
}

