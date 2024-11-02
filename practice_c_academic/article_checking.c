/*
Write a C program that will identify the articles from a given input string and count the articles.
Ex:
Input String:    An ant bit the boy and a bird saw the event.
Analysis of the given input:
A - 1
An - 1
The - 2
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    // Write C code here
    char ch[1000];
    scanf("%[^#]", ch);
    int a_count = 0, an_count = 0, the_count = 0;
    for(int i =0; ch[i] != '\0'; i++){
        ch[i] = tolower(ch[i]);
    }
    for(int i =0; ch[i] != '\0'; i++){
        if(ch[i] == 'a' && (i == 0 || ch[i-1] == ' ') && (ch[i+1] == ' ' || ch[i+1] == '.' || ch[i+1] == '\0')){
            a_count++;
        }
        else if(ch[i] == 'a' && ch[i+1] == 'n' && (i == 0 || ch[i-1]  == ' ') && (ch[i+2] == ' ' || ch[i+2] == '.' || ch[i+2] == '\0')){
            an_count++;
        }
        else if(ch[i] == 't' && ch[i+1] == 'h' && ch[i+2] == 'e' && (i == 0 || ch[i-1] == ' ') && (ch[i+3] == ' ' || ch[i+3] == '.' || ch[i+3] == '\0')){
            the_count++;
        }
    }

printf("A -> %d\nAn -> %d\nThe -> %d\n",a_count,an_count,the_count);
    return 0;
}
