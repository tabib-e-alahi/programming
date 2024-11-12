#include<stdio.h>
#include<string.h>

#define max 100001
int main()
{
    int c= 0;
    char ch[max];
    scanf("%s", ch);

    int len = strlen(ch);

    for(int i = 0; i < len; i++)
    {
        if(ch[i] != 'a' && ch[i] != 'e' && ch[i] != 'i' && ch[i] != 'o' && ch[i] != 'u')
        {
            c++;
        }
    }

    printf("%d\n", c);

    return 0;
}


