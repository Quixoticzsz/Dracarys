# Dracarys
#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  double fenzi=2,fenmu=1,m=0;
  double sum=0;
  for(int x=0;x<n;x++){
    sum+=fenzi/fenmu;
    m=fenzi;
    fenzi=fenzi+fenmu;
    fenmu=m;
  }
  printf("%.2f",sum);
  return 0;
}
