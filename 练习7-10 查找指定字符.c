#include<stdio.h>
int main(){
    int i=0,k,index=-1;
    char ch[80],s;
    scanf("%c\n",&s);
    while((ch[i]=getchar())!='\n')
        i++;
    ch[i]='\0';
    for(k=0;k<i;k++)
        if(ch[k]==s)
            index=k;
    if(index!=-1)
        printf("index = %d",index);
    else
        printf("Not Found");
    return 0;
}
