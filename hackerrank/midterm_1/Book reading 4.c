#include<stdio.h>
int main()
{
    int n, i, t, c =0,sum=0,a;
    scanf("%d %d",&n,&t);
    for(i=1; i <= n; i++){
        scanf("%d",&a);
        sum += a;
        if(sum <= t){
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}


