#include<stdio.h>
int main()
{
    int x = 10;
    int *p = &x; // storing/poniting address of x to p

    printf("%d\n", &x); // address of x
    printf("%d\n", p); // address of p which is the address of x
    printf("%d\n", x); // data of x
    printf("%d\n", *p); // data from address of x
    /*
    Output till now is:
            6422296
            6422296
            10
            10
    */
    int *p2 = p; // again storing address of p to p2 which is a address of x

    // now If we change any of the 3 elements, all three will be changed
    x  =100;
    printf("\n\n");
    printf("%d\n", &x); // address of x
    printf("%d\n", p); // address of p which is the address of x
    printf("%d\n", p2);
    printf("%d\n", x); // data of x
    printf("%d\n", *p); // data from address of x
    printf("%d\n", *p2); // data from address of

    /*
    Output till now is:
            6422292
            6422292
            6422292
            100
            100
            100
    */
    return 0;
}
