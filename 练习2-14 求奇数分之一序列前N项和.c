#include <stdio.h>

int main(){
int n;
double sum=0;
scanf("%d",&n);
for(double i=1;i<=2*n-1;i+=2)
sum=sum+1/i;
printf("sum = %f",sum);
    return 0;
}
