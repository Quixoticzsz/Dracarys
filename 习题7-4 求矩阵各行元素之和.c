#include <stdio.h>

int main(){
    int m,n,i,j,sum;
    scanf("%d%d\n",&m,&n);
    int s[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&s[i][j]);
    for(i=0;i<m;i++){
        j=0;
        sum=0;
        while(j<n){
            sum+=s[i][j];
            j++;
        }
        printf("%d\n",sum);
    }
	return 0;
}
