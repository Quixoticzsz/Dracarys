#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,sum=0;
    double average,*p,*pmin,*pmax;
    scanf("%d",&n);
    p=(double*)malloc(n*sizeof(double));
    for(i=0;i<n;i++)
        scanf("%lf",p+i);
    pmin=pmax=p;
    for(i=0;i<n;i++){
        if(*p>*pmax)
            pmax=p;
        if(*p<*pmin)
            pmin=p;
        sum+=*p++;
    }
    average=sum*1.0/n;
    printf("average = %.2f\nmax = %.2f\nmin = %.2f",average,*pmax,*pmin);
    return 0;
}
