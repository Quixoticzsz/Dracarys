# Dracarys
#include <stdio.h>
#include <math.h>
double fact(int n);
int main(){
int a,b;
scanf("%d%d",&a,&b);
double result=fact(b)/(fact(a)*(fact(b-a)));
printf("result = %.0f",result);
    return 0;
}
double fact(int n){
    double x=1;
    for(int y=1;y<=n;y++)
    x*=y;
    return x;
}
