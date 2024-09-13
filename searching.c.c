#include<stdio.h>
main(){
  int key=9,found=0;
  int arr[5]={1,2,3,4,5};
for (int i=0;i<5;i++){
  if(arr[i]==key){
    found=1;
    break;
  }
}
  if(found==1){
    printf("found");
  }
  else{
    printf("not found");
  }
  return 0;
}

