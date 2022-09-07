#include <iostream>
#include <locale>
#include <locale.h>

using namespace std;

main()
	{
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, qtd30, qtdpar, qtdimp, qtdneg;
	
	qtd30 = 0;
	qtdpar = 0;
	qtdimp = 0;
	qtdneg = 0;
	
	cout<<"Informe um número : ";
	cin>>num;
	
	while(num != 0){
		if (num > 30){
			qtd30++;
		}
		if (num % 2 == 0){
			qtdpar++;
		}else {
			qtdimp++;
		}
		if(num < 0){
			qtdneg++;
		}
	}
	
	cout<<"Quantidade de números maiores que 30: "<<qtd30;
	cout<<"Quantidade de numeros pares: "<<qtdpar;
	cout<<"Quantidade de numeros impares: "<<qtdimp;
	cout<<"Quantidade de numeros negativos: "<<qtdneg;
}
