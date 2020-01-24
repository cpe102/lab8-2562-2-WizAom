#include<iostream>
using namespace std;
int printO(int x,int y){
	if(x<=0 || y<=0){
		cout << "Invalid input\n";
	}else{
		for(int i=1;i<=x;i++){
			for(int n=1;n<=y;n++){
			cout << "O";
			}
		cout << "\n";
		}
	}
	
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
