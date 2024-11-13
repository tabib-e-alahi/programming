#include<stdio.h>
#include<string.h>
#define max 1001

int is_palindrome(char s[])
{
    int len = strlen(s);
    char ch[len];
    for(int i = 0, j = len - 1; i < len && j >= 0 ; i++, j--)
    {
        ch[i] = s[j];
    }

    ch[len] = '\0';

    return  strcmp(s, ch);
}

int main()
{
    char str[max];
    scanf("%s", str);
    int res = is_palindrome(str);
    if(res == 0){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }

    return 0;

}

