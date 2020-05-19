#include <stdio.h>

int main(){
    int i,j,max_num,n,temp;
    scanf("%d\n",&n);
    int s[n];
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    for(i=0;i<n;i++){
        max_num=i;
        for(j=i+1;j<n;j++){
            if(s[j]>s[max_num])
                max_num=j;
        }
        temp=s[i];
        s[i]=s[max_num];
        s[max_num]=temp;
    }
     for(i=0;i<n;i++){
         printf("%d",s[i]);
         if(i<n-1)
             printf(" ");
     }
	return 0;
}
