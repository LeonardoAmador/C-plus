#include <iostream>
#include <locale>

using namespace std;

main(){
	float altura, pesoideal;
	
	cout<<"Informe sua altuara: ";
	cin>>altura;
	
	pesoideal = (72.7 * altura) - 58;
	
	cout<<"Seu peso ideal e "<<pesoideal;
}
