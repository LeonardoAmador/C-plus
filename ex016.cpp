#include <iostream>
#include <locale>

using namespace std;

main(){
	int num1, num2, M;
	
	cout<<"Digite o primeiro numero: \n";
	cin>>num1;
	cout<<"Digite o segundo numero: \n";
	cin>>num2;
	
	if (num1=num2){
		cout<<"Numeros iguais";
	}
	else{
		if(num1 > num2){
			M<<num1;
				cout<<"O maior numero e: \n"<< num1;
			}
			else {
				M <<num2;
					cout<<"O maior numero e: \n"<< num2;
			}
		}
	}

