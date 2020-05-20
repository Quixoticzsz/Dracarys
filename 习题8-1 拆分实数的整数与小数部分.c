#include <stdio.h>

void splitfloat( float x, int *intpart, float *fracpart );

int main()
{
    float x, fracpart;
    int intpart;

    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);

    return 0;
}
void splitfloat( float x, int *intpart, float *fracpart ){
    float a=x;
    while(a>=1)
        a--;
    *fracpart=a;
    *intpart=(int)(x-a);
}
