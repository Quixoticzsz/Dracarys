#include <stdio.h>
struct time{
	int h;
	int m;
	int s;
};
int main(){
	int n;
	struct time s1,now;
	scanf("%d:%d:%d\n",&s1.h,&s1.m,&s1.s);
	scanf("%d",&n);
	if((s1.s+n)<=59)
	s1.s+=n;
	else if((s1.m+1)<59){
		s1.s=(s1.s+n)%60;
		s1.m+=1;
	}
	else if((s1.h+1)<24){
		s1.s=(s1.s+n)%60;
		s1.m=(s1.m+1)%60;
		s1.h+=1;
	}
	else {
		s1.s=(s1.s+n)%60;
		s1.m=0;
		s1.h=0;
	}
	printf("%02d:%02d:%02d",s1.h,s1.m,s1.s);
	return 0;
}
