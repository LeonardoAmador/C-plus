#include <iostream>
#include <locale>

using namespace std;

main(){
	
	int Media;
	
	cout<<"Informe o saldo medio do cliente: ";
	cin>>Media;
	
	switch (Media) {
		case 0 ... 200:
			cout<<"Sem valor de credito";
			break;
		case 201 ... 400: 
			cout<<"Credito de 20% no valor de "<<(Media * 0.2);
			break;
		case 401 ... 600:
			cout<<"Credito de 30% no valor de "<<(Media * 0.3);
			break;
		default:
			cout<<"Credito de 40% no valor de "<<(Media * 0.4);	
	}
}
	
