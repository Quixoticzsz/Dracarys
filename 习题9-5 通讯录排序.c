#include <stdio.h>
struct friends{
    char name[11];
    int birthday;
	char phone[18]; 
};
int main(){
	int i,j,n,max;
	scanf("%d\n",&n);
	struct friends s[n],temp;
	for(i=0;i<n;i++)
	scanf("%s %d %s\n",&s[i].name,&s[i].birthday,&s[i].phone);
	for(i=0;i<n-1;i++){
		max=i;
		for(j=i+1;j<n;j++)
		if(s[j].birthday<s[max].birthday)
		max=j;
		temp=s[max];
		s[max]=s[i];
		s[i]=temp;
	}
	for(i=0;i<n;i++)
	printf("%s %d %s\n",s[i].name,s[i].birthday,s[i].phone);
	return 0;
}
