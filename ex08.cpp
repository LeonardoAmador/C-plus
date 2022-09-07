#include <iostream>
#include <locale>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idfuncionario, num_filhos;
	
	float num_horas, valor_hora, valor_salario, valor_sf;
	
	cout<<"Informe o numero do funcionario:";
	cin>>idfuncionario;
	
	cout<<"Informe o numero de horas:";
	cin>>num_horas;
	
	cout<<"Informe o valor da hora:";
	cin>>valor_hora;
	
	cout<<"Informe a quantidade de filhos menor de 14 anos:";
	cin>>num_filhos;
	
	valor_salario = num_horas * valor_hora;
	
	valor_sf = valor_salario * 0.10 * num_filhos;
	
	valor_salario = valor_salario + valor_sf;
	
	cout<<"Valor do salario: "<<valor_salario;
	
	
	
	
	
	
}
