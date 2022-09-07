#include <iostream>
#include <locale>

using namespace std;

main(){
	
	float Media;
	
	cout<<"Informe o saldo medio do cliente: ";
	cin>>Media;
	
	if((Media >= 0) && (Media <= 200))
		cout<<"Sem valor de credito";
	else if ((Media >= 201) && (Media <= 400))
		cout<<"Credito de 20% no valor de "<<(Media * 0.2);
		else if ((Media >= 401) && (Media <= 600))
			cout<<"Credito de 30% no valor de "<<(Media * 0.3);
			else
				cout<<"Credito de 40% no valor de "<<(Media * 0.4);
}
