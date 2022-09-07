#include <iostream>
#include <locale>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valor;
	
	valor = 5;
	
	valor = valor + 10;
	
	valor = valor * (valor / 2);
	
	cout<<"Valor = "<<valor;
	
	// Div = 7.5
	// Mul = 15 * 7
	
}
