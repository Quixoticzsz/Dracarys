int factorsum( int number ){
    int sum=0;
    if(number==1)
    return 1;
   else{
   for(int i=1;i<number;i++)
    if(number%i==0)
    sum+=i;
    return sum;}
}
void PrintPN( int m, int n ){
    int flag=0;
    while(m==1){
        flag=1;
        printf("1 = 1\n");
        m++;
    }
    for(int i=m;i<=n;i++){
        if(factorsum(i)==i){
            flag=1;
            printf("%d = 1",i);
            for(int x=2;x<i;x++)
                if(i%x==0)
				printf(" + %d",x);
            printf("\n");
        }
    }
    if(flag==0)
        printf("No perfect number");
}
