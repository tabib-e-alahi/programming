#include<stdio.h>
#include<string.h>
#define max 1001
int main()
{
    char s[max], t[max];
    scanf("%s", s);
    scanf("%s", t);
    int len_s = strlen(s);
    int len_t = strlen(t);
    if( len_s != len_t){
        printf("NO\n");
        return 0;
    }

    int freq_s[26] = {0}, freq_t[26] = {0};
    int flag = 1;
    for(int i = 0; i < len_s; i++)
    {
        freq_s[s[i] - 'a']++;
        freq_t[t[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(freq_s[i] != freq_t[i])
        {
            flag =0;
            break;
        }
    }

    if(flag == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}

