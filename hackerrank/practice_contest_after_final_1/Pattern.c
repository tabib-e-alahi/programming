#include<stdio.h>

void print_function(char ch, int range)
{
    for(int j = 1; j <=range; j++)
        {
            printf("%c", ch);
        }
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        //printing space
        print_function(' ', n-i);
        if(i % 2 == 0){
            print_function('-', ( 2 * i  - 1));
        }
        else{
            print_function('#', ( 2 * i  - 1));
        }
        printf("\n");
    }
     for(int i = n-1; i >= 1; i--)
    {
        //printing space
        print_function(' ', n-i);
        if(i % 2 == 0){
            print_function('-', ( 2 * i  - 1));
        }
        else{
            print_function('#', ( 2 * i  - 1));
        }
        printf("\n");
    }


}


