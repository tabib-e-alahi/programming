#include<stdio.h>
int main()
{
    int n,i,x=0;
    char ch[10];
    scanf("%d",&n);
    for(i = 0;  i < n; i++)
    {
        scanf("%s",&ch);
        if(ch == "X++")
        {
            x++;
            printf("Clicked +");
        }
        else if(ch == '--X' || ch == 'X--')
        {
            --x;
            printf("Clicked -");
        }
    }
    printf("%d\n",x);
    return 0;
}
