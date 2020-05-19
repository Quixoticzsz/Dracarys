#include <stdio.h>
double fact(int n);
int main(){
	int count=0,n;
	double grade,average=0,total=0;
	scanf("%d",&n);
	 for(int i=1;i<=n;i++){
	 	scanf("%lf",&grade);
	 	total+=grade;
	 	if(grade>=60)
	 	count++;
	 }
	 if(n==0)
	 average=0;
	 else
     average=total/n;
	 printf("average = %.1f\ncount = %d",average,count);
    return 0;
}
