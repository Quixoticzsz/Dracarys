#include <stdio.h>
int main(){
    double x,cost;
    scanf("%lf",&x);
    if (x<0)
    printf("Invalid Value!");
    else {if(x<=50)
    cost=x*0.53;
    else
    cost=x*0.53+(x-50)*0.05;
    printf("cost = %.2f",cost);
    }
    return 0;
}
