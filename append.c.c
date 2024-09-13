#include<stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp=fopen("RaaNa.txt","a");
  fputc('b',fp);
 fputs("hello",fp);
 return 0;
}