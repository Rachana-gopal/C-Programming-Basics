#include <stdio.h>
int main(void) {
 int num,temp,rem,n=0;
  int result=0;
  printf("Enter the number:");
  scanf(" %d",&num);
  temp=num;
  while(temp!=0)
    {
      temp=temp/10;
      ++n;
    }
  temp=num;
  while(temp!=0)
  { rem=temp%10;
   int pow=1;
   for(int i=0;i<n;i++){
     pow*=rem;
   }
   result+=pow;
   temp/=10;
    }
  if (result==num)
    printf("%d is an Armstrong number",num);
  else
    printf("%d is not an Armstrong number",num);
  return 0;
}