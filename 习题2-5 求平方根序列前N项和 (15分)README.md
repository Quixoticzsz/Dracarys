# Dracarys
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    double sum=0;
    scanf("%d",&n);
    for(;n;n--)
    sum+=sqrt(n);
    printf("sum = %.2f",sum);
    return 0;
}
