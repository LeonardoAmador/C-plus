#include <iostream>
#include <locale>

using namespace std;

main (){
	
	float n1, n2, media;
	int amount;
	int contador = 0;
	
	
	cout<<"Informe 	quantas operacoes deseja realizar: ";
	cin>>amount;
	// While (condicao) {
	while (contador <= amount) {
		cout<<"Digite a nota 1: ";
		cin>>n1;
		cout<<"Digite a nota 2: ";
		cin>>n2;
		media = (n1 + n2) / 2;
		cout<<"Media = "<<media<<"\n\n";	
		
		contador ++;
	}
}


