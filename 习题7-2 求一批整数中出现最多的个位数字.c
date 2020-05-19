#include <stdio.h>

int main(){
    int n,i,j,max_num=0,s[10]={0,0,0,0,0,0,0,0,0,0};
    scanf("%d\n",&n);
    int k[n];
    for(i=0;i<n;i++)
        scanf("%d",&k[i]);
    for(i=0;i<n;i++){
        if(k[i]==0)
            s[0]++;
        else{
            while(k[i]!=0){
            j=k[i]%10;
            s[j]++;
            k[i]/=10;
        }
            }
    }
    for(i=1;i<10;i++)
        if(s[i]>s[max_num])
            max_num=i;
    printf("%d:",s[max_num]);
    for(i=0;i<10;i++)
        if(s[i]==s[max_num])
            printf(" %d",i);
	return 0;
}
