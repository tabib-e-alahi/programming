#include<stdio.h>
int main()
{
    int n, i, x, y, z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        double avg = (x+y)/2.0;
        if(avg > z){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
