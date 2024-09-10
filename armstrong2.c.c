#include<stdio.h>
#include<math.h>
int main(){
  int n,org,rem,result=0,dig=0;
  printf("enter the number");
  scanf("%d",&n);
  org=n;
  while(org!=0){
    org/=10;
    dig++;}
  org=n;
  while(org!=0)
    {
      rem=org%10;
      result +=pow(rem,dig);
      org/=10;
    }
  if(result==n)
    printf("Armstrong number");
  else
    printf("it is not an armstrong number");
  return 0;

}

