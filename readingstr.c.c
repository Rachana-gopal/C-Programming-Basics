#include<stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp=fopen("RaaNa.txt","r");
  fgets(c,5,fp);
  printf("str is %s\n" ,c);
  fclose(fp);
  return 0;
}