double funcos( double e, double x ){
  double item,sum=0,sum1=1;
  int flag=1,a=0;
  item=1.0*flag*pow(x,a)/sum1;
  while(fabs(item)>=e){
    sum+=item;
    a+=2;
    flag=-flag;
    sum1=sum1*a*(a-1);
    item=1.0*flag*pow(x,a)/sum1;
  }
  sum+=item;
  return sum;
}
