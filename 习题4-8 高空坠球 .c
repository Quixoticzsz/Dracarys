#include<stdio.h>
#include<math.h>
int main(){
  int x,n;
  double total,Ntan,sum=0;
  scanf("%d%d",&x,&n);
  if(n==0){
    total=0;
    Ntan=0;
  }
  else if(n==1){
    total=x;
    Ntan=x/2;
  }
  else {
    Ntan=x/pow(2,n);
    for(int a=0;a<=(n-2);a++){
      sum+=1/pow(2,a);
    }
    total=x*(1+sum);
}
  printf("%.1f %.1f",total,Ntan);
}
