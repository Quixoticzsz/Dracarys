#include<stdio.h>
#include<math.h>
int main(){
  double eps,number,sum=0;
  int fenzi,fenmu,fuhao;
  fenzi=1;
  fenmu=1;
  fuhao=1;
  number=1.0*fuhao*fenzi/fenmu;
  scanf("%lf",&eps);
  while(fabs(number)>eps){
    sum+=number;
    fenmu+=3;
    fuhao=-fuhao;
    number=1.0*fuhao*fenzi/fenmu;
  }
  sum+=number;
  printf("sum = %.6f",sum);
  return 0;
}
