#include <stdio.h>
int main(){
    int letter,digit,blank,others;
	char op;
	letter=digit=blank=others=0;
	for(int i=1;i<=10;i++){
		op=getchar();
		if((op>='a'&&op<='z')||(op>='A'&&op<='Z')){
		letter++;
		}else if(op>='0'&&op<='9'){
		digit++;
		} else if(op==' '||op=='\n'){
		blank++;
        } else{
		others++;
		}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,others);
	return 0;
}
