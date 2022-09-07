#include <iostream>
#include <locale>
#include <locale.h>

using namespace std;

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int id, cont, menos14, maior14, how_manytimes;
	float totalcaixa;
	
	menos14 = 0;
	maior14 = 0;
	totalcaixa = 0;
	cont = 1;
	
	cout<<"Quantas vezes deseja fazer a leitura? ";
	cin>>how_manytimes;
	
	while (cont <= how_manytimes) {
		cout<<"Informe a idade : ";
		cin>>id;
		
		if (id < 14){
			menos14 = menos14 + 1;
			totalcaixa = totalcaixa + 5;
		}else {
			if(id > 14){
				maior14 = maior14 + 1;
				totalcaixa = totalcaixa + 8;
			}
		}
		cont = cont + 1;
	}
	
	cout<<"Ingressos menor que 14 anos: "<<menos14<<"\n";
	cout<<"Ingressos maior que 14 anos: "<<maior14<<"\n";
	cout<<"Valor em caixa = \n"<<totalcaixa;
}
