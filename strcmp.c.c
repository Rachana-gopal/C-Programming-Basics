#include<stdio.h>
#include<string.h>
void main(){
char str1[10],str2[10];
  printf("Enter string1");
  scanf("%s",str1);
  printf("Enter string2");
  scanf("%s",str2);
int result= strcmp(str1,str2);
  if (result==0){
    printf("strings are equal"); 
  }
  else if(result<0){
    printf("str1 is less than str2");
  }
  else{
    printf("str1 is greater than str2");
  }
}