int fib( int n ){
    int a1=1,a2=1,result;
    if(n<=2)
        return 1;
    n-=2;
    for(int i=1;i<=n;i++){
        result=a1+a2;
        a2=a1;
        a1=result;
    }
    return result;
}
void PrintFN( int m, int n ){
    int a1=1,a2=1,result=0;
    if(m==1){
    result=a1;
    printf("%d ",a1);
}
    else{
    while(result<m){
        result=a1+a2;
        a2=a1;
        a1=result;
    }    }
    if(result>n)
        printf("No Fibonacci number");
    else{
        while(result<=n)
        {
            printf("%d",result);
            result=a1+a2;
        a2=a1;
        a1=result;
            if(result<=n)
                printf(" ");
        }
    }
}
