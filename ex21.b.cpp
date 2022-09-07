#include <iostream>
#include <locale>

using namespace std;

main (){
	int num1, num2, opc;
	float media, dif, div, product;

	cout<<"Informe a operaçao que deseja realizar:  ";
	cin>>opc;
	cout<<"Informe o primeiro numero: ";
	cin>>num1;
	cout<<"Informe o segundo numero: ";
	cin>>num2;

switch (opc) {
	case 1:
		media == (num1 + num2)/2;
		cout<<"A media dos numeros e: "<<(media);
		break;
	
	case 2:
		dif == num1 - num2;
		cout<<"A diferença entre os numeros e: "<<(dif);
		break;
	
	case 3:
		product = num1 * num2;
		cout<<"O produto entre os numeros digitados e: "<<(product);
		break;
	
	case 4:
		if (num2 != 0)
			cout<<"A divisao e igual a: "<<(num1 / num2);
		else
			cout<<"Nao e possivel dividir por zero \n";
		break;
		
	default:
		cout<<"Opcao invalida";
	}
}
