#include<stdio.h>
int main(){
    int i=0,k;
    char ch[80];
    while((ch[i]=getchar())!='\n')
        i++;
    ch[i]='\0';
    for(k=i-1;k>=0;k--)
        printf("%c",ch[k]);
    return 0;
}
