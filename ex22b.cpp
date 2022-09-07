#include <iostream>
#include <locale>

using namespace std;

main () {
	
	int codigo, qtde;
	
	cout<<"Cardapio e ai vc imprime as opcoes do mesmo \n";
	cout<<"Qual item voce deseja: ";
	cin>>codigo;
	cout<<"Qual a quantidade do item: ";
	cin>>qtde;
	
	switch(codigo) {
		case 100:
			cout<<"Cachorro quente \n";
			cout<<"O preco do produto e ="<<(1.7 * qtde)<<"\n";
			break;
		case 101: 
			cout<<"Bauru Simples \n";
			cout<<"O preco do produto e ="<<(2.3 * qtde)<<"\n";
			break;
		case 102:
			cout<<"Bauru com ovo \n";
			cout<<"O preco do produto e ="<<(2.6 * qtde)<<"\n";
			break;
		case 103:
			cout<<"Hamburguer \n";
			cout<<"O preco do produto e ="<<(2.4 * qtde)<<"\n";
			break;
		case 104:
			cout<<"Cheeseburguer \n";
			cout<<"O preco do produto e ="<<(2.5 * qtde)<<"\n";
			break;
		case 105:
			cout<<"Refrigerante \n";
			cout<<"O preco do produto e ="<<(1 * qtde)<<"\n";
			break;
		default:
			cout<<"Opcao invalida.";
	}
}



