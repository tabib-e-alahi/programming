
#include<stdio.h>
int main(){
    int marks;
    printf("Enter Your mark: ");
    scanf("%d",&marks);
    if(marks >= 80 && marks <= 100){
        printf("Your Grade:  A+\n");
    }
    else if(marks >= 70 && marks <= 79){
        printf("Your Grade:  A\n");
    }
     else if(marks >= 60 && marks <= 69){
        printf("Your Grade:  A-\n");
    }
     else if(marks >= 50 && marks <= 59){
        printf("Your Grade:  B\n");
    }
     else if(marks >= 40 && marks <= 49){
        printf("Your Grade:  C\n");
    }
    else if(marks >= 33 && marks <= 39){
        printf("Your Grade:  D\n");
    }
    else if(marks < 33){
        printf("Your Grade:  F\n");
    }
    else{
        printf("Invalid Marks\n");
    }

    return 0;
}

