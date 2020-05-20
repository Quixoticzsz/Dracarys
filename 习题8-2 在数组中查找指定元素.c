#include <stdio.h>
#define MAXN 10

int search( int list[], int n, int x );

int main()
{
    int i, index, n, x;
    int a[MAXN];

    scanf("%d", &n);
    for( i = 0; i < n; i++ )
        scanf("%d", &a[i]);
    scanf("%d", &x);
    index = search( a, n, x );
    if( index != -1 )
        printf("index = %d\n", index);
    else
        printf("Not found\n");

    return 0;
}
int search( int list[], int n, int x ){
    int flag=-1;
    for(int i=0;i<n;i++)
        if(list[i]==x){
            flag=i;
            break;
            }
    return flag;
}
