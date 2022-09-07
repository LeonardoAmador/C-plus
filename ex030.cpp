#include <iostream>
#include <locale.h>
#include <locale>

using namespace std;

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float cont, F, N;
	
	cont = N;
	F = 1;
	cout<<"Qual número deseja calcular o fatorial: ";
	cin>>N;
	
	while (cont <= N) {
		F = F * cont;
		cont <- cont - 1;
	}
	
	cout<<"O valor do fatorial de \n"<<N<<" e igual a : \n"<<F;
}

