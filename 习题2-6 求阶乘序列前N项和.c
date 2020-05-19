#include <stdio.h>
double fact(int n);
int main(){
    int n;
    double sum=0;
    scanf("%d",&n);
    for(;n;n--)
    sum+=fact(n);
    printf("%.0f",sum);
    return 0;
}
double fact(int n){
    double x=1;
    for(;n;n--)
    x*=n;
    return x;
}
