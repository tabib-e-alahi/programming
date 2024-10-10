#include<stdio.h>
int main(){
    int x,y,z,max,min;
    scanf("%d %d %d",&x, &y, &z);
   // Find the maximum
    if (x >= y && x >= z) {
        max = x;
    } else if (y >= x && y >= z) {
        max = y;
    } else {
        max = z;
    }

    // Find the minimum
    if (x <= y && x <= z) {
        min = x;
    } else if (y <= x && y <= z) {
        min = y;
    } else {
        min = z;
    }

   printf("%d %d\n",min, max);
    return 0;
}

