#include <iostream>
#include <locale>

using namespace std;

main (){
	
	int amount_now, max_stock, min_stock;
	float media;
	char opc = 'S';
	
	while (opc == 'S'){
		cout<<"Informe a quantidade atual em estoque: ";
		cin>>amount_now;
		cout<<"Quantidade maxima em estoque: ";
		cin>>max_stock;
		cout<<"Quantidade minima em estoque: ";
		cin>>min_stock;
		
		media = (max_stock + min_stock) / 2;
		
		if (amount_now >= media){
			cout<<"Nao efetuar compra \n";
		}else{
			cout<<"Efetuar compra \n";
		}
		
		cout<<"Deseja continuar? ";
		cin>>opc;
	}
	
}
