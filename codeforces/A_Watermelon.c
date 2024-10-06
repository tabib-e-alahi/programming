#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    /*
    Explanation: the number should be divided into two even parts and all the even number
     can be divided into two even parts except 2. 2 can only be divided into 1 , 1.
    */
    if( n>2 && (n % 2 == 0)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
