void pyramid( int n ){
  for(int i=1;i<=n;i++){
    for(int j=n;j-i>0;j--) printf(" ");
    for(int m=i;m>0;m--) printf("%d ",i);
    printf("\n");
    }
}
