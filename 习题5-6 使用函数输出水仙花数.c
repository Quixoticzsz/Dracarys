int narcissistic( int number ){
  int n,x=number,y=number,sum=0,flag=0,h=1;
  for(n=0;x>0;n++)
    x/=10;
    while(y!=0){
      int a=y%10;
    for(int b=n;b>0;b--)
        h*=a;
      sum+=h;
      h=1;
      y=y/10;
  }
  if(sum==number)
      flag=1;
	  return flag;     
}
void PrintN( int m, int n ){
for(m+=1;m<n;m++)
if(narcissistic(m))
printf("%d\n",m);
}
