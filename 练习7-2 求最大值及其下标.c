#include<stdio.h>

int main(){
    int n, x=0;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
        if(s[i]>s[x])
            x=i;
    }
    printf("%d %d",s[x],x);
    return 0;
}
