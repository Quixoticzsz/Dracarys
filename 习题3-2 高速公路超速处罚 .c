#include <stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x<(y*1.1))
    printf("OK");
    else if (x<(y*1.5))
    printf("Exceed %.0f%%. Ticket 200",(x-y)*1.0/y*100);
    else
    printf("Exceed %.0f%%. License Revoked",(x-y)*1.0/y*100);
	return 0;
}
