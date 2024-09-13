#include <stdio.h>
int naina(int a, int b) {
  return a % b;
}
int main(void) {
  int a,b,sum;
  printf("Enter a number: ");
  scanf("%d",&a);
  printf("Enter another number: ");
  scanf("%d",&b);
  sum=naina(a,b);
  printf("The rem of the two numbers is %d",sum);
}
