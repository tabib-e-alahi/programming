#include<stdio.h>
#include<string.h>
#define max 1001

int is_palindrome(char s[])
{
    int len = strlen(s);
    int flag = 1;
    for(int i = 0, j = len - 1; i < j; i++, j--)
    {
        if(s[i] != s[j]){
            flag = 0;
        }
    }

    return  flag;
}

int main()
{
    char str[max];
    scanf("%s", str);
    int res = is_palindrome(str);
    if(res == 1){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }

    return 0;

}

