#include <iostream>
#include <locale>
#include <locale.h>

using namespace std;

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	float current_wage, yearsOf_work, new_salary;
	
	cout<<"Informe o salário atual : ";
	cin>>current_wage;
	
	cout<<"Informe o gênero Masculino[M] ou Feminino[F] :";
	cin>>sexo;
	
	cout<<"Anos de prestação de serviço: ";
	cin>>yearsOf_work;
	
	if ((sexo == 'F') && (yearsOf_work < 15)){
		new_salary = current_wage + (current_wage * 5/100);
		cout<<"O novo salário é : \n"<<new_salary;
	}else {
		if ((yearsOf_work > 15) && (yearsOf_work <= 20)){
			new_salary = current_wage + (current_wage * 12/100);
			cout<<"O novo salário é : \n"<<new_salary;
		} else {
			if ((sexo == 'F') && (yearsOf_work > 20)) {
				new_salary = current_wage + (current_wage * 23/100);
				cout<<"O novo salário é : \n"<<new_salary;
			}else {
				if ((sexo == 'M') && (yearsOf_work <= 30)){
					new_salary = current_wage + (current_wage * 13 / 100);
					cout<<"O novo salário é : \n"<<new_salary;
				}else {
					if ((sexo == 'M') && (yearsOf_work > 30)) {
						new_salary = current_wage + (current_wage * 25 / 100);
						cout<<"O novo salário é : \n"<<new_salary;
					}
				}
			}
		}
	}
}
