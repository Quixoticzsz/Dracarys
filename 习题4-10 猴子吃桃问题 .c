#include<stdio.h>
int main(){
  int n,sum=1;
  scanf("%d",&n);
  for(;n>1;n--){
    sum=(sum+1)*2;
  }
  printf("%d",sum);
}
