#include<stdio.h>
int main()
{
    int w, x, y, z,c=0;
    scanf("%d %d %d %d",&w,&x,&y,&z);
    if(w>=10)
    {
        c++;
    }
    if(x>=10)
    {
        c++;
    }
    if(y>=10)
    {
        c++;
    }
    if(z>=10)
    {
        c++;
    }
     printf("%d\n",c);
    return 0;
}

