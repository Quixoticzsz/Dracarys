#include <stdio.h>

int f( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", f(n));

    return 0;
}
int f( int n ){
    int result;
    if(n==0)
        result=0;
    else if(n==1)
        result=1;
        else
        result=f(n-1)+f(n-2);
    return result;
}
