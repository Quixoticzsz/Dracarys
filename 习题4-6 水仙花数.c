#include<stdio.h>
int pow(int a,int b);
int main(){
  int n,max,min,count=9,count1=1;
  scanf("%d",&n);
  for(int x=n;x>1;x--){
    max=count*10+9;
    count=max;
    min=count1*10;
    count1=min;
  }
  for(int y=min;y<=max;y++){
    int z=y;
    int sum=0;
    while(z!=0){
      int a=z%10;
      sum+=pow(a,n);
      z=z/10;
      }
    if(sum==y)
      printf("%d\n",sum);
  }
  return 0;
}
int pow(int a,int b){
  int t=a;int h=1;
  for(int c=b;c>=1;c--)
    h*=a;
  return h;
}
