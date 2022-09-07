#include <iostream>
#include <locale>
#include <locale.h>

using namespace std;

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float value, salary, year, monthly, months;
	
	cout<<"Qual o valor da casa : ";
	cin>>value;
	
	cout<<"Qual seu salario atual : ";
	cin>>salary;
	
	cout<<"Em quantos anos deseja pagar a casa : ";
	cin>>year;
	
	months = year * 12;
	monthly = value / months;
	
	if (monthly > salary * 0.3) {
		cout<<"EMPRESTIMO NEGADO";
	}else {
		cout<<"O valor das parcelas mensais serão : \n"<<monthly;
	}
}
