int fn( int a, int n ){
	int count=0;
    for(int i=1;i<=n;i++)
	count=count*10+a;
	return count;
}
int SumA( int a, int n ){
    int sum=0,count=0;
    for(int i=1;i<=n;i++){
            count=count*10+a;
            sum+=count;
    }
    return sum;
}
