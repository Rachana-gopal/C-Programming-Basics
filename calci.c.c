#include<stdio.h>
int main(){
  int a,b;
  char oper;
  printf("Enter the num 1:");
  scanf("%d",&a);
  printf("Enter the num 2:");
  scanf("%d",&b);
  printf("Enter the operator:");
  scanf(" %c",&oper);
  if (oper=='+'){
    printf("The sum is %d",a+b);
  }
  else if(oper=='-'){
    printf("The sub is %d",a-b);
  }
  else if(oper=='*'){
    printf("The mul is %d",a*b);
  }
  else if(oper=='/'){
    if (b!=0){
      printf("The div is %d",a/b);
    }
  else 
    printf(" dividion by 0 in not possible");  
  }
  else
    printf("Invalid operator ");
  
}

