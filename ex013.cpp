#include <iostream>
#include <locale>

using namespace std;

main(){
	
	int num1, num2, dif; 
	
	cout<<"Informe o 1. valor ";
	cin>>num1;
	
	cout<<"Informe o 2. valor  ";
	cin>>num2;
	
	if (num1 < num2) {  //Se esssa condicao é verdadeira
		dif = num2 - num1;
		cout<<"O numero 2 eh maior \n";
	}
	else {			   //senao -> caso seja falso
		dif = num1 - num2;
		cout<<"O numero 1 eh maior \n";
	}
                   	  //diferenca = num2 - num1
	
	cout<<"Valor da diferenca = "<<dif //never try this fuck again at home, because, s
}
