#include <iostream>
#include <locale>

using namespace std;

main() {
	int cod;
	char prod;
	
	cout<<"Informe o codigo do produto: ";
	cin>>cod;
	
	switch(cod) {
		case 100:
			cout<<"Cachorro quente \n";
			cout<<"O preco do produto e: R$ 1.70";
			break;
		case 101: 
			cout<<"Bauru Simples \n";
			cout<<"O preco do produto e: R$ 2.30";
			break;
		case 102:
			cout<<"Bauru com ovo \n";
			cout<<"O preco do produto e: R$ 2.60";
			break;
		case 103:
			cout<<"Hamburguer \n";
			cout<<"O preco do produto e: R$ 2.40";
			break;
		case 104:
			cout<<"Cheeseburguer \n";
			cout<<"O preco do produto e: R$ 2.50";
			break;
		case 105:
			cout<<"Refrigerante \n";
			cout<<"O preco do produto e: R$ 1.00";
			break;
		default:
			cout<<"Opcao invalida.";
	}
}


