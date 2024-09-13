#include<stdio.h>
main(){
  int pos=2;
  int arr[4]={1,2,3,4};
for (int i=pos;i<4;i++){
  arr[i]=arr[i+1];
}
  {
    printf("%d",arr[pos]);
  }
}
