#include<stdio.h>
int main(){
    int i,year,month,day,sum=0;
    int s[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d/%d/%d",&year,&month,&day);
    if((year%4==0&&year%100!=0)||year%400==0)
        s[2]=29;
    for(i=1;i<month;i++)
        sum+=s[i];
    sum+=day;
    printf("%d",sum);
    return 0;
}
