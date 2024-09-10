#include<stdio.h>
int main(){
  int a,b,result;
  char ch;
  printf("Enter the num 1:");
  scanf("%d",&a);
  printf("Enter the num 2:");
  scanf("%d",&b);
  printf("enter the choice:");
  scanf(" %c",&ch);
  switch(ch)
    {case'+':printf("addition\n");
    result=a+b;
    printf("result is %d",result);
      break;
    case'-':printf("subtraction\n");
    result=a-b;
    printf("result is %d",result);
      break;
  case'*':printf("multiplication\n");
    result=a*b;
    printf("result is %d",result);
    break;
  case'/':printf("division\n");
    result=a/b;
    printf("result is %d",result);
     break;
  default:printf("invalid choice");
}
  
}

