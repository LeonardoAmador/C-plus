#include <iostream>
#include <locale>

using namespace std;

main(){
	
	int num1, num2, dif; 
	
	cout<<"Informe o 1. valor ";
	cin>>num1;
	
	cout<<"Informe o 2. valor  ";
	cin>>num2;
	
	if (num1 < num2) {
		dif = num2 - num1;
		cout<<"O numero 2 eh maior \n";
	}
	else
		if (num2 < num1) {
			dif = num1 - num2;
			cout<<"O numero 2 eh maior \n";
		}
		else {
			dif = num1 = num2;
			cout<<"Os sao iguais\n";
		}
		
		
	cout<<"A diferenca entre os numeros e"<<dif;
	
	
	
	
	
	
	
}
