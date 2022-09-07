#include <iostream>
#include <locale>

using namespace std;

main(){
	float saldo, v_c;
	
	cout<<"Digite o saldo desejado: ";
	cin>>saldo;
	
	if ((saldo <= 0) && (saldo <= 200)){
		cout<<"Você nao tem credito para operacao ";
	}else {
		if ((saldo <= 201) && (saldo <= 400)){
			v_c == (saldo * 0.2);
			cout<<"O seu limite de credito e: \n"<<v_c;
		}else {
			if ((saldo <= 401) && (saldo <= 600)){
				v_c == (saldo * 0.3);
				cout<<"O seu limite de credito e: \n"<<v_c;
			}else {
				if ((saldo > 600)){
				v_c == (saldo * 0.4);
				cout<<"O seu limite de credito e: \n"<<v_c;
				}
			}
		}
	}
}

