#include <iostream>
#include <locale>

using namespace std;

main(){
	float A, Psih, Psim;
	char S;
	
	cout<<"Informe o sexo H-Masculino e M-Feminino: ";
	cin>>S;
	cout<<"Informe a altura: ";
	cin>>A;
	
	if (toupper (S)=='H'){
		Psih = (72.7 * A) - 58;
			cout<<"Seu peso ideal e: \n"<<Psih;
	}
	else {
		if (toupper (S)=='M'){
			Psim = (62.1 * A) - 44.7;
				cout<<"Seu peso ideal e: \n"<<Psim;
		}
		else {
			cout<<"Sexo invalido!";
			return 0;
		}
	}		
}
