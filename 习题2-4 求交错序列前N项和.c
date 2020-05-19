#include <stdio.h>
int main(){
    int n,flag=1;
    double sum=0;
    scanf("%d",&n);
    for(double x=1;x<=n;x++){
        sum+=x/(2.0*x-1)*flag;
        flag=-flag;
    }
    printf("%.3f",sum);
    return 0;
}
