#include<stdio.h>

int main()
{
  int *a;
  int d=10;
  a=&d;
  printf("address of d is %d\n",&a);
printf("value %d ",*a);
}
