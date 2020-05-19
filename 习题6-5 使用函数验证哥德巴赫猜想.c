int prime( int p ){
    int flag=1;
    if(p==1)
        flag=0;
    for(int i=2;i<=p/2;i++)
        if(p%i==0)
            flag=0;
    return flag;
}
void Goldbach( int n ){
    for(int i=2;i<n;i++)
        if(prime(i)&&prime(n-i)){
            printf("%d=%d+%d",n,i,n-i);
            break;
        }
}
