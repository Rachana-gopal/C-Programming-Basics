#include <stdio.h>
int add(int a, int b) {
  return a + b;
}
int main(void) {
  int a,b,sum;
  printf("Enter a number: ");
  scanf("%d",&a);
  printf("Enter another number: ");
  scanf("%d",&b);
  sum=add(a,b);
  printf("The sum of the two numbers is %d",sum);
}
