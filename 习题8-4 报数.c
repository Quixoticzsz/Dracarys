#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}
void CountOff(int n, int m, int out[]){
    int a[MAXN];                        
    int index;  // 退出顺序编号
    int i;      // 位置
    int cnt;    // 累计报数
    for(i=0;i<n;i++)
        a[i]=1;
    index = i = cnt = 0;
    while (index < n)
    {
        if (a[i])
            cnt++;
        if (cnt == m)
        {
            a[i] = 0;
            out[i] = ++index;
            cnt = 0;
        }
        i++;
        if (i == n)
            i = 0;
    }
    return;
}
