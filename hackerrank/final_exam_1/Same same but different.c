#include<stdio.h>
#include<string.h>

int main()
{
    char a[101], b[101], c[101];
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);
    int count = 0;
    int len = strlen(a);
    for(int i = 0; i < len; i++){
            if(a[i] == b[i] && b[i] == c[i]){
            continue;
        }
        else if(a[i] == b[i] || b[i] == c[i] || a[i] == c[i]){
            count++;
        }
        else{
            count += 2;
        }
    }
    printf("%d\n", count);
    return 0;
}
