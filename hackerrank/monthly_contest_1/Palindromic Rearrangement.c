#include<stdio.h>
#include<string.h>
#define max 1001
int main()
{
    char s[max];
    scanf("%s", s);
    int len_s = strlen(s);
    int freq_s[26] = {0};
    for(int i = 0; i < len_s; i++)
    {
        freq_s[s[i] - 'a']++;
    }

    int odd = 0;

    for(int i = 0; i < 26; i++)
    {
        if(freq_s[i] % 2 != 0)
        {
            odd++;
        }
    }

    if(odd > 1){
        printf("%d\n", odd - 1);
    }
    else{
        printf("0\n");
    }
    return 0;
}


