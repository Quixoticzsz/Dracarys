#include <stdio.h>

double calc_pow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.0f\n", calc_pow(x, n));

    return 0;
}
double calc_pow( double x, int n ){
    double result;
    if(n==1)
        result=x;
    else
        result=x*calc_pow(x,n-1);
    return result;
}
