#include<stdio.h>
int main(){
  FILE *fp;
  char c;
  fp=fopen("RaaNa.txt","r");
  c=fgetc(fp);
  printf("character is %c\n",c);
  fclose(fp);
  return 0;
}