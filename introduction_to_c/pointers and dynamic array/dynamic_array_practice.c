#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int)); // dynamically declaring array of size n with memory allocation

    for(int i = 1; i <= n; i++){
        scanf("%d", arr + i);
    }
    for(int i = 1; i <= n; i++){
        printf("%d ", *(arr + i));
    }

    // now change the size to extra 5
    // arr = realloc(arr, (n+5) * sizeof(int));

    // printf("\n\nAfter using realloc:\n");
    // for(int i = n+1; i <= n+5; i++){
    //     arr[i] = i;
    // }

    // for(int i = 1; i <= n+5; i++){
    //     printf("%d ", *(arr + i));
    // }

    free(arr);

    /*
    Output is:
       1 2 3 4 5 6 7

    After using realloc:
    1 2 3 4 5 6 7 8 9 10 11 12
    */
    return 0;
}

