#include<stdio.h>
int main()
{
    int n, ex, i;
    scanf("%d",&n);
    for(i=1; i <= n; i++){
        scanf("%d",&ex);
        if(ex < 1){
            printf("Entry-level candidate\n");
        }
        else if(1 <= ex  && ex <= 3){
            printf("Junior candidate\n");
        }
        else if(4 <= ex && ex <= 7){
            printf("Mid-level candidate\n");
        }
        else if(7 < ex){
            printf("Senior candidate\n");
        }
    }
    return 0;
}
