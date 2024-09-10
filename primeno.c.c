#include <stdio.h>
int main(void) {
 int i,flag=0,num;
  printf("Enter the number:");
  scanf(" %d",&num);
  if (num<2)
    printf("it is not a prime");
  while(num!=0){
    for(i=2;i<num;i++)
    if(num%i==0)
      flag=1;
      break;
  }
  if(flag==0)
    printf("Prime Number");
  else
    printf("Not a prime Number");
  return 0;
}