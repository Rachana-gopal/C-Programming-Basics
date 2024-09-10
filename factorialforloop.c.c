#include <stdio.h>
int main(void) {
  int i,n,fact=1;
  printf("enter the number");
  scanf("%d",&n);
  if (n<0)
    printf("it is negative");
  else
    for(i=1;i<=n;i++)
      fact*=i;
  printf("factorial of the number is %d",fact);
  return 0;
}