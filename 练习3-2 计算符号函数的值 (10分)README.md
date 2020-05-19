# Dracarys
#include <stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    if(n<0)
    x=-1;
    else if(n==0)
    x=0;
    else
    x=1;
    printf("sign(%d) = %d",n,x);
    return 0;
}
