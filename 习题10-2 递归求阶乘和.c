#include <stdio.h>

double fact( int n );
double factsum( int n );

int main()
{
    int n;

    scanf("%d",&n);
    printf("fact(%d) = %.0f\n", n, fact(n));
    printf("sum = %.0f\n", factsum(n));
		
    return 0;
}
double fact( int n ){
	double result;
	if(n==1||n==0)
	result=1;
	else
	result=fact(n-1)*n;
	return result;
}
double factsum( int n ){	
    double result=0;
    for(n;n>0;n--)
        result+= fact(n);
    return result;
}
