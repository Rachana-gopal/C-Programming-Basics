#include <stdio.h>
int main()
 {
  int num,rev=0,temp,i;
  printf("Enter a number: ");
  scanf("%d",&num);
  temp=num;
  while(num!=0){
    i=num%10;
    rev=rev*10+i;
    num=num/10;
  }
  if (temp==rev)
   printf("The number is a palindrome");
  else
   printf("The number is not a palindrome");
  return 0;
}