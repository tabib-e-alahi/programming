#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001], b[1001], c[1001], min[10001], max[10001];
    scanf("%s %s %s",a, b, c);
    if(strcmp(a,b) > 0 && strcmp(a,c) > 0)
    {
        strcpy(max,a);
        if(strcmp(b,c) > 0)
        {
            strcpy(min,c);
        }
        else
        {
            strcpy(min,b);
        }
    }
    else if(strcmp(b,a) > 0 && strcmp(b,c) > 0)
    {
        strcpy(max,b);
        if(strcmp(a,c) > 0)
        {
            strcpy(min,c);
        }
        else
        {
            strcpy(min,a);
        }
    }
    else if(strcmp(c,a) > 0 && strcmp(c,b) > 0)
    {
        strcpy(max,c);
        if(strcmp(a,b) > 0)
        {
           strcpy(min,b);
        }
        else
        {
            strcpy(min,a);
        }
    }
    printf("%s\n",min);
    printf("%s\n",max);

    return 0;
}

