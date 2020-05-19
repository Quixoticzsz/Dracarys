#include <stdio.h>

int main(){
    int i,j,x,t,n;
    scanf("%d\n",&t);
    int k[t];
    for(i=0;i<t;i++)
        k[i]=1;
    for(i=0;i<t;i++){
        scanf("%d\n",&n);
        int s[n][n];
        for(j=0;j<n;j++)
            for(x=0;x<n;x++)
                scanf("%d",&s[j][x]);
        for(j=0;j<n;j++)
            for(x=0;x<n;x++)
                if(j>x&&s[j][x]!=0)
                    k[i]=0;
    }
    for(i=0;i<t;i++){
        if(k[i]==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
	return 0;
}
