int CountDigit( int number, int digit ){
  int i,item,count=0;
  if(number<0)
    number=-number;
  do{
    item=number%10;
    if(item==digit)
      count++;
    number/=10;
  }while(number!=0);
  return count;
}
