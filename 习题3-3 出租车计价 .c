#include <stdio.h>
int main(){
    double x,price1,sum;
    int y,price2;
    scanf("%lf%d",&x,&y);
    if(x<=3)
    price1=10;
    else if(x<=10)
    price1=10+(x-3)*2;
    else
    price1=24+(x-10)*3;
    if(y/5)
        price2=y/5*2;
    sum=(int)(price1+0.5)+price2;
    printf("%.0f",sum);
	return 0;
}
