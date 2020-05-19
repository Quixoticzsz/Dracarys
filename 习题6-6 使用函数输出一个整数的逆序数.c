int reverse( int number ){
    int x=number,count,count1=0,sum=0;
    if(x<0)
        x=-x;
    while(x!=0){
        count=x%10;
        x/=10;
        sum=count1*10+count;
        count1=sum;
    }
    if(number<0)
        return -sum;
    else return sum;
}
