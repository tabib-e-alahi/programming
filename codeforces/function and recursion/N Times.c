#include <stdio.h>

void print_avg(double n[], int t)
{
    double sum = 0;
    for (int i = 0; i < t; i++)
    {
        sum += n[i];
    }
    double res = sum / t;
    printf("%f\n", res);  // Changed from %lf to %f
}

int main()
{
    int t;
    scanf("%d", &t);
    double n[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%lf", &n[i]);
    }

    print_avg(n, t);
    return 0;
}
