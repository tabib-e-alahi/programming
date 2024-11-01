#include<stdio.h>
#include<stdlib.h>
int main()
{
    /*
    int x = 10;
    int *p = &x;
    x++;
    printf("%d",*p); // output: 11
    */

    /*
    int x = 10;
    int *p = &x;
    int y = 20;
    *p = ++y;
    x++;
    printf("%d",x); // Output : 22
    */

     /*
     int a[4] = {1, 2, 3, 4};
    int *p;
    p = a + 2;
    p++;
    *p = 100;
    for(int i =0; i < 4; i++){
        printf("%d ",a[i]);
    }
    Output: 1 2 3 100
     */
    /*
     int x =10;
     int *p = &x;
     printf("%d\n",p);
     printf("%d",&x);
    */

     //int a[5] = {10, 20, 30, 40, 50};
    //printf("%d", *a);
    int x,y,z;
    x = 10, y = 20, z = 30;
    int *p, *q;
    p = &x;
    q = &y;
    *p = 40;
    x = 50;
    q = p;
    printf("%d",*q);
    return 0;
}


