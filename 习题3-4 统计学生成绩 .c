
#include <stdio.h>
int main(){
    int x,y;
    int a,b,c,d,e;
    a=b=c=d=e=0;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        scanf("%d",&y);
        switch(y/10){
        case 10:case 9:
        a++;break;
        case 8:
        b++;break;
        case 7:
        c++;break;
        case 6:
        d++;break;
        default:
        e++;break;
    }
        }
        printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
}
