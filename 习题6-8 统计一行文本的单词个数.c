#include<stdio.h>

int main(){
    int i=0,sum=0;
    char ch[1000];
    gets(ch);
    while(ch[i]==' ') i++;
    while(ch[i]!='\0'){
        if(ch[i]!=' ') i++;
        while(ch[i]==' ')
            i++;
            sum++;
    }
    printf("%d",sum);
    return 0;
}
