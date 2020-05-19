#include <stdio.h>
#include <math.h>
int isPrime(int n);
int main()
{
    int M,N;
    int cnt=0;
    int sum=0;
    scanf("%d %d",&M,&N);
    for(int i=M;i<=N;i++){
        if(isPrime(i)){
            cnt++;
            sum+=i;
        }
    }
    printf("%d %d\n",cnt,sum);
    return 0;
}
int isPrime(int n)
{
    int flag=1;
    if(n==1) flag=0;
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n % i == 0) flag=0;
        }
    }
    return flag;
}
