#include<stdio.h>
int main()
{
    int t, x, y, z, i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&x, &y, &z);
        if(x > y && x > z)
        {
            printf("Setter\n");
        }
        else if(x < y && y > z){
            printf("Tester\n");
        }
        else if(x < z && y < z){
            printf("Editorialist\n");
        }
    }
    return 0;
}


