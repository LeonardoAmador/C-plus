#include <iostream>
#include <locale>
#include <locale.h>

using namespace std;

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int maior, menor, numHomens, F, cont; 
	float mediaH, Altura, total;
	char sexo;
	
	maior = 0;
	menor = 0;
	mediaH = 0;
	total = 0;
	numHomens = 0;
	F = 0;
	cont = 1;
	
	while (cont == 1) {
		cout<<"Informe a altura :";
		cin>>Altura;
		cout<<"Informe o sexo: [M OU F]";
		cin>>sexo;
		
		if (cont = 1){
			maior = Altura;
			menor = Altura;
		}
		
		if (Altura > maior) {
			maior = Altura;
		}else {
			if (Altura < menor) {
				menor = Altura;
			}else {
				if (sexo == 'F') {
					total = total +  Altura;
					F = F + 1;
					mediaH = (total / F);
				}else{
					if (sexo == 'M'){
						numHomens = numHomens + 1;
					}
				}
			}
		}
		cout<<"Deseja continuar? [1 ou 0]";
		cin>>cont;
	}
	
	cout<<"A maior altura: "<<maior<<"\n";
	cout<<"A menor altura: "<<menor<<"\n";
	cout<<"A media de altura das mulheres: "<<mediaH<<"\n";
	cout<<"Numero de homens: "<<numHomens<<"\n";
	
}
