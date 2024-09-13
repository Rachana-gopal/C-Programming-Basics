#include<stdio.h>
int fact(){
  printf("factorial");
  fact();
  return 5;
}
int main()
{
  int c=fact();
}
