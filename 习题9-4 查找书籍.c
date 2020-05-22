#include <stdio.h>
struct book{
    char name[31];
    double value;
};
int main(){
	int i,n,min=0,max=0;
	scanf("%d\n",&n);
	struct book s[n];
	for(i=0;i<n;i++){
		gets(s[i].name);
		scanf("%lf\n",&s[i].value);
	}
	for(i=0;i<n;i++){
		if(s[i].value<s[min].value)
		min=i;
		if(s[i].value>s[max].value)
		max=i;
	}
	printf("%.2f, %s\n",s[max].value,s[max].name);
	printf("%.2f, %s\n",s[min].value,s[min].name);
	return 0;
}
