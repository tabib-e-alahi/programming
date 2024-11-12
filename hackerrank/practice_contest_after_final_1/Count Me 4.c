#include<stdio.h>
#include<string.h>

#define max 100001
int main()
{
    char ch[max];
    scanf("%s", ch);
    int len = strlen(ch);
    int f[26] = {0};

    for(int i = 0; i < len; i++)
    {
        f[ch[i] - 'a'] ++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(f[i] >= 1){
            printf("%c - %d\n", i + 'a', f[i]);
        }
    }

    return 0;
}



