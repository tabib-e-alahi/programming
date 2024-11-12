#include<stdio.h>
int main()
{
    int t, m1, m2;
    int d;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);
        int new_d = (d * m1) / (m1 + m2);
        printf("%d\n", d - new_d);
    }

}
