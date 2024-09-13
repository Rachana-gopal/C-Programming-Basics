#include<stdio.h>
void main(){
  int n,i;
  char str[50];
  printf("Enter N:");
  scanf("%d",&n);
  printf("Enter String:");
  scanf("%s",str);
  printf("%s\n",str);
  for(i=1;i<=n;i++)
    {
      printf("%c\n",str[i]);
    }
}