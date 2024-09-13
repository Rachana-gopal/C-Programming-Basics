#include <stdio.h>
  struct book{
  int num;
  char name[20];
  float price;
};
    int main(){
    struct book hp;
    hp.num=367629;
    hp.price=100767.0;
    strcpy(hp.name,"harry potter");
    printf(" num %d\n",hp.num);
    printf(" price %f\n",hp.price);
    printf(" name %s\n",hp.name);
    return 0;
}

