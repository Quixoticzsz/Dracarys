#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s[n];
    int x=0,y=n-1,temp;
    for(int i=0;i<n;i++)
        scanf("%d",&s[i]);
    while(x<y){
        temp=s[x];
        s[x]=s[y];
        s[y]=temp;
        x++;
        y--;
    }
        for(int i=0;i<n;i++){
        printf("%d",s[i]);
            if(i<n-1)
                printf(" ");
        }
    return 0;
}
