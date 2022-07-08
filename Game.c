#include <stdio.h>

int decimalToBinary(int n){

	int i = 1,binary=0;
	while(n!=0){
		int reminder = n%2;
		n /= 2;
		binary += (reminder * i);
		i *= 10;

	}

	return binary;
}

void winGame(int n){
  printf("\n");
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}

	printf("Game Win!");
}

void loseGame(int n){
  printf("\n");
	for(int i = 1;i<=n;i++){
		for(int j = n;j>=i;j--){
			printf("* ");

		}
		printf("\n");
	}
	printf("Game Over!");
  printf("\nCorrect Binary Number : %d",decimalToBinary(n));
}

void mainGame(){
	int dN,bN;
	printf("\nEnter a Decimal Number : ");
	scanf("%d",&dN);
	printf("\nBinary : ");
	scanf("%d",&bN);

	if(bN == decimalToBinary(dN)){
		winGame(dN);
	}
	else{
		loseGame(dN);
	}
}
int main(){
	while(1){
    		printf("\n");
		mainGame();
	}
	return 0;
}
