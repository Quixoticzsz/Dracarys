#include <stdio.h>
int main(){
	int choice;
	double price;
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	for(int i=1;i<=5;i++){
        scanf("%d",&choice);
        if(choice==0)
        break;
        switch(choice){
            case 1:
            price=3.0;break;
            case 2:
            price=2.5;break;
            case 3:
            price=4.1;break;
            case 4:
            price=10.2;break;
            default:
            price=0.0;break;
        }
        printf("price = %.2f\n",price);
	} 
	return 0;
}
