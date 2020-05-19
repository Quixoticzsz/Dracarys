#include <stdio.h>
#include <math.h>
int main(){
    int a;
    scanf("%d",&a);
for(int n=0;n<=a;n++){
    int x=pow(3,n);
printf("pow(3,%d) = %d\n",n,x);
}
    return 0;
}
