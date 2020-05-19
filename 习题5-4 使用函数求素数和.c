int prime( int p ){
  int result=1;
  if(p<=1) result=0;
  else{
  for(int i=2;i<p;i++){
    if(p%i==0){
      result=0;
	  break;
	}
  }
}
  return result;
}
int PrimeSum( int m, int n ){
  int sum=0;
  for(;m<=n;m++)
    if(prime( m ))
      sum+=m;
  return sum;
}
