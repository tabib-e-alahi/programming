#include<stdio.h>
int main()
{
  long int n;
  int i,x;
  scanf("%ld%d",&n,&x);
  for(i=0;i<x;i++)
  {
    if(n%10==0)
    n=n/10;
    else
    n=n-1;
  }
  printf("%ld", n);
  return 0;
}
