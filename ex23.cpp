#include <iostream>
#include <locale>

using namespace std;

	main (){
		
		float n1, n2, media;
		
		int contador;
		
		//1. inicialização
		//2. condicao
		//3. fator incremento
		// contador++ -> contador = contador + 1
		for (contador = 0; contador <= 3; contador ++){
			
			cout<<"Digite a nota 1: ";
			cin>>n1;
			cout<<"Digite a nota 2: ";
			cin>>n2;
			media = (n1 + n2) / 2;
			cout<<"Media = "<<media<<"\n\n";
		}
	}
