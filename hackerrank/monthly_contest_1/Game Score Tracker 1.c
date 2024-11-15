#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int scores[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }

    int max = scores[0], max_count = 0;
    for(int i = 1; i < n; i++)
    {
       if(scores[i] > max){
            max_count ++;
        max = scores[i];
       }
    }

    int min = scores[0], min_count = 0;
    for(int i = 1; i < n; i++)
    {
       if(scores[i] < min){
        min_count ++;
        min = scores[i];
       }
    }

    printf("%d %d\n", max_count, min_count);
}

