#include <stdio.h>
int main(void){
  int a;
  printf("enter the number ");
  scanf("%d",&a);
  if (a%2==0){
    printf("the number is even");
  }
   else{
    printf("the number is odd");
  }
    return 0;
}