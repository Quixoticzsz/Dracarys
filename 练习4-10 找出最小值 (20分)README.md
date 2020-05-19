# Dracarys
#include<stdio.h>
int main(){
  int n,x;
  int min=65535;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&x);
    if(x<min)
      min=x;
  }
  printf("min = %d",min);
}
