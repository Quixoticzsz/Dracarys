#include<stdio.h>
int main(){
    int n,i,j,sum=0;
    scanf("%d",&n);
    int s[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&s[i][j]);
        for(i=0;i<n-1;i++)
            for(j=0;j<n-1;j++)
                if(i+j!=n-1)
                    sum+=s[i][j];
    printf("%d",sum);
    return 0;
}
