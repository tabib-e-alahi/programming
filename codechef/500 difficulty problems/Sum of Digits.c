#include<stdio.h>
int main()
{
    int t, n, i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        int sum=0;
        if(n <=9){
           printf("%d\n",n);
        }

        else{
                while(n>9){
                    sum += n%10;
                    n = n / 10;
                }
           printf("%d\n",sum + n);
        }
    }
    return 0;
}


