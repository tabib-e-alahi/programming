#include<stdio.h>
int main()
{
  int x,i;
  scanf("%d",&x);
  for(i=1;i<x;i++)
  {
    if (i%2==1)
    {
      printf("I hate that ");

    }
    else
    {
      printf("I love that ");
    }
  }
  if(x%2==1)
  {
    printf("I hate it\n");
  }
  if(x%2==0)
  {
    printf("I love it\n");

  }
  return 0;
}
