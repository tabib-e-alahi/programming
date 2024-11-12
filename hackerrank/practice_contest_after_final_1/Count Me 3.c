#include<stdio.h>
#include<string.h>

#define max 100001
int main()
{
    int t;
    char ch[max];
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        int cap= 0, small = 0, digits = 0;
        scanf("%s", ch);
        int len = strlen(ch);
        for(int j = 0; j < len; j++)
        {
            if(ch[j] >= 'A' && ch[j] <= 'Z')
            {
                cap++;
            }
            else if(ch[j] >= 'a' && ch[j] <= 'z')
            {
                small++;
            }
            else if(ch[j] >= '0' && ch[j] <= '9'){
                digits++;
            }
        }

        printf("%d %d %d\n", cap, small, digits);
    }



    return 0;
}



