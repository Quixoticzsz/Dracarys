#include <stdio.h>
int main(){
    int x;
    char ch;
    scanf("%d",&x);
    switch(x/10){
        case 10:case 9:
        ch='A';break;
        case 8:
        ch='B';break;
        case 7:
        ch='C';break;
        case 6:
        ch='D';break;
        default:
        ch='E';break;
    }
    printf("%c",ch);
	return 0;
}
