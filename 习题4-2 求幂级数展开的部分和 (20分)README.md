# Dracarys
#include<stdio.h>
double power(double a,int b);
int fact(int n);
int main(){
  double x;
  scanf("%lf",&x);
  double count=x;
  double sum=1;
  for(int n=2;fabs(count)>=0.00001;n++){
  	sum+=count;
    count=power(x,n)/fact(n);
  }
  printf("%.4f",sum);
  return 0;
}
int fact(int n){
  int m=1;
  for(int x=n;x>1;x--)
    m*=x;
  return m;
}
double power(double a,int b){
  double t=a;double h=1;
  for(int c=b;c>=1;c--)
    h*=a;
  return h;
}
