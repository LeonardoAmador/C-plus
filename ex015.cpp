#include <iostream>
#include <locale>

using namespace std;

main(){
	
	int num;
	
	cout<<"Informe um numero";
	cin>>num;
	
	if ((num % 2)== 0 ){
		cout<<"O numero e par \n";
	}
	else {
		cout<<"O numero e impar \n";
	}
	if (num > 505){
		cout<<"Numero maior que 505 \n";
	}
	else {
		cout<<"Encerrar programa";
	}
}
