# Dracarys
#include <stdio.h>
#include <math.h>
int main(){
    double x1,x2,x3,y1,y2,y3;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    double a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    double b=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    double c=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    if((a+b)>c&&(a+c)>b&&(b+c)>a){
        double L=(a+b+c);
        double p=(a+b+c)/2;
        double A=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("L = %.2f, A = %.2f",L,A);
    }
    else
    printf("Impossible");
	return 0;
}
