#include<stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp=fopen("RaaNa.txt","w");
  fputc('b',fp);
 fputc("hello",fp);
 return 0;
}