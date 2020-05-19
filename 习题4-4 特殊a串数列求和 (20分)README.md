# Dracarys
#include<stdio.h>
int main(){
  int a,n,x,sum=0;
  scanf("%d%d",&a,&n);
  int count=a;
  for(int m=1;m<=n;m++){
    sum+=count;
    x=count;
    count=x*10+a;
  }
  printf("s = %d",sum);
}
