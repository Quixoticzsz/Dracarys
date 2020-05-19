#include <stdio.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int row=(n/2)+1;
	for(int i=1;i<=row;i++){
		for(int j=row-i;j>0;j--){
			printf("  ");
		}
	for(int j=0;j<(2*i-1);j++){
		printf("* ");
		}
	printf("\n");
	}
	for(int i=1;i<row;i++){
		for(int j=0;j<i;j++){
			printf("  ");
			}
	for(int j=(row-i)*2-1;j>0;j--){
		printf("* ");
		}
		printf("\n");
	}
 
	return 0;
}
