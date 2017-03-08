#include<stdio.h>
void main()
{
  int n;
  scanf("%d",&n);
  if(n!=0)
  {
    if(n>0)
    printf("positive");
    else
    printf("negative");
  }
  else
  printf("zero");
}
