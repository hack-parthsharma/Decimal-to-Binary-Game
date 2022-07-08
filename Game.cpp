#include <iostream>
using namespace std;

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
  cout<<"\n";
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}

	cout<<"You Win!";
}

void loseGame(int n){
  cout<<"\n";
	for(int i = 1;i<=n;i++){
		for(int j = n;j>=i;j--){
			cout<<"* ";

		}
		cout<<endl;
	}
	cout<<"Game Over!";
	cout<<"\nCorrect Binary number : " <<decimalToBinary(n);
}

void mainGame(){
	int dN,bN;
	printf("\nEnter a Decimal Number : ");
	cin>>dN;
	printf("\nBinary : ");
	cin>>bN;

	if(bN == decimalToBinary(dN)){
		winGame(dN);
	}
	else{
		loseGame(dN);
	}
}
int main(){
	while(1){
		cout<<endl;
		mainGame();
	}
	return 0;
}
