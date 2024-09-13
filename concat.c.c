#include<stdio.h>
void main(){
char str1[10],str2[10];
  printf("Enter name1:");
  scanf("%s",str1);
  printf("Enter name2:");
  scanf("%s",str2);
 strcat(str1,str2);
printf(str1);
}