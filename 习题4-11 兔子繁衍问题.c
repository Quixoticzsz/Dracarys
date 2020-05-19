#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int sum=0,x1=1,x2=1,month=2;
  if(n==1)
    month=1;
  else {
    while(sum<n){
    month++;
    sum=x1+x2;
    x2=x1;
    x1=sum;
  }
}
    printf("%d",month);
    return 0;
}
