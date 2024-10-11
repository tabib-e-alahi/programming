#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
    if(n <= 9)
    {
        printf("%d\n",n+n);
    }
    else
    {
        int last = n % 10;
        n = n/10;
        while(n>=10)
        {
            n = n / 10;
        }
        int first = n;
        printf("%d\n",last + first);
    }
    }
   return 0;
}
