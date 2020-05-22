#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
		
    return 0;
}

int search( int n ){
    int i;
    if(n<121)
        i=0;
    else if(n<144)
        i=1;
    else if(n<225)
        i=2;
    else if(n<400)
        i=3;
    else if(n<441)
        i=4;
    else if(n<484)
        i=5;
    else if(n<676)
        i=6;
    else if(n<900)
        i=7;
    else i=8;
    return i;

}
