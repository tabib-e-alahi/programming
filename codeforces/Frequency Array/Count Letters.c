#include<stdio.h>
int main()
{
    char s[1000001];
    fgets(s, sizeof(s), stdin);
    int f[26] = {0};
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        f[s[i] - 'a']++; // Increment the count for the corresponding letter
    }
    for(int i = 0; i < 26; i++){
        if(f[i] != 0){
            printf("%c : %d\n",i + 'a',f[i]);
        }
    }
    return 0;
}
