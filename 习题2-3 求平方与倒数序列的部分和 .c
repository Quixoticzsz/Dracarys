#include <stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    double sum=0;
    for(int x=m;x<=n;x++)
         sum+=(x*x*1.0+(1.0/x));
         printf("sum = %.6f",sum);
    return 0;
}
