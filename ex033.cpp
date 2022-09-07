#include <iostream>
#include <locale>
#include <locale.h>

using namespace std;

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, aposta, trying, gerado;
	char acertou;
	
	trying = 0;
	acertou = 'N';
		
	num = 100;
	
	while (acertou == 'N'){
		cout<<"Digite sua aposta : ""\n";
		cin>>aposta;
		trying = trying + 1;
		if (aposta == num) {
			acertou = 'S';
		}else{
			if (aposta > num){
				cout<<"ERRADO - aposta alta""\n";
			}else {
				if(aposta <num){
					cout<<"ERRADO - aposta baixa""\n";
				}
			}
		}
	}
	cout<<"Acertou em: "<<trying<<"\n";
}
