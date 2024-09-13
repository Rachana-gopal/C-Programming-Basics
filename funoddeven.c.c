#include<stdio.h>
int test(num){
  printf("Enter the number: ");
  scanf("%d",&num);
  if (num%2==0){
    printf("even");
  }
  else{
    printf("odd");
  }
}
 
int main(){
  int num,check;
  test();
}

