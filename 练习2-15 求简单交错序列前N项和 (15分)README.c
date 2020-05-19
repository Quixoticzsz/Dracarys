#include <stdio.h>

int main(){
int n;
int flag=1;
double item;
double sum=0;
scanf("%d",&n);
for(double i=1;i<=3*n-2;i+=3){
item=flag*(1/i);
sum+=item;
flag=-flag;
}
printf("sum = %.3f",sum);
    return 0;
}
