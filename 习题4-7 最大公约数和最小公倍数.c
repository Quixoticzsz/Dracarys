#include<stdio.h>
int main(){
  int m,n,t,yue,bei;
  scanf("%d%d",&m,&n);
  int t1=m,t2=n;
  while(n!=0){
    t=m%n;
    m=n;
    n=t;
}
  yue=m;
  bei=t1*t2/yue;//最小公倍数=两数相乘/最大公约数
  printf("%d %d",yue,bei);
}
