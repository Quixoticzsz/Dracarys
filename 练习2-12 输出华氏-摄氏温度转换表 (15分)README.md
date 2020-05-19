# Dracarys
#include <stdio.h>

int main(){
int lower,upper;
scanf("%d%d",&lower,&upper);
if(lower>upper)
printf("Invalid.");
else{
    printf("fahr celsius\n");
    for(int x=lower;x<=upper;x+=2)
    printf("%d%6.1f\n",x,5.0*(x-32)/9.0);
}
    return 0;
}
