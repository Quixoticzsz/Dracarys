int even( int n ){
  int flag;
  if(n%2==0)
    flag=1;
  else
    flag=0;
  return flag;
}
int OddSum( int List[], int N ){
  int sum=0;
  for(int i=0;i<N;i++){
    if(!even(List[i]))
      sum+=List[i];
  }
  return sum;
}
