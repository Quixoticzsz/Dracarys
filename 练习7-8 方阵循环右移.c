#include<stdio.h>
int main(){
    int m,n,i,j,sum=0;
    scanf("%d%d",&m,&n);
    int s[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&s[i][j]);
    m=m%n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            printf("%d ",s[i][(n-m+j)%n]);
            sum++;
            if(sum%n==0)
                printf("\n");
            }
    return 0;
}
