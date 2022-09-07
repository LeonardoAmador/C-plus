#include <iostream>
#include <locale>

using namespace std;

main (){
	
	float n1, n2, media;
	
	char opc = 'S';
	
	int cAp=0, cRp=0;
	
	while (opc == 'S'){
		cout<<"Digite a nota 1: ";
		cin>>n1;
		cout<<"Digite a nota 2: ";
		cin>>n2;
		media = (n1 + n2) / 2;
		cout<<"Media = "<<media<<"\n\n";
		
		if (media >=7){
			cout<<"Aprovado\n\n";
			cAp++;
		}else {
			cout<<"Reprovado\n\n";
			cRp++;
		}
		
		cout<<"Deseja continuar? ";
		cin>>opc;
	}
	
	cout<<"A quantidade de aprovados="<<cAp<<"\n\n";
	cout<<"A quantidade de reprovado="<<cRp<<"\n\n";
}
