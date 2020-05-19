#include<stdio.h>
int main(){
  int n,count=0,mynumber,yournumber;
  scanf("%d%d",&mynumber,&n);
  while(count<n){
    scanf("%d",&yournumber);
    if(yournumber<0){
      printf("Game Over");
      break;
    }
    if(mynumber==yournumber){
      if(count==0){
        printf("Bingo!");
		break;
		}
      else if(count>0&&count<=2){
        printf("Lucky You!");
		break;
		}
      else{
        if(count>2&&count<n){
        printf("Good Guess!");
        break;
        }
    }
    }
    else{
      if(mynumber>yournumber)
        printf("Too small\n");
      else
        printf("Too big\n");
      }
    count++;
  }
  if(count>=n)
    printf("Game Over");
  return 0;
}
