#include<stdio.h>
double fact(int n);
int main(){
  int x;
  double sum=1;
  scanf("%d",&x);
  for(int m=1;m<=x;m++)
    sum+=fact(m);
  printf("%.8f",sum);
	return 0;
}
double fact(int n){
  double count =1;
  for(;n>0;n--)
    count*=n;
  double result=1/count;
  return result;
}
