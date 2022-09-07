#include <iostream>
#include <locale>
#include <locale.h>

using namespace std;

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float time, cash, totalp;
	int points;
	
	cout<<"Quantas horas de atividade foi feita : ";
	cin>>time;
	
	cash = 0.05;
	points = 0;
	
	if (time <= 10) {
		points = points + 2;
		totalp = points * time;
		cash = totalp * cash;
		cout<<"O total de pontos foi : "<<totalp<<"\n";
		cout<<"O total em R$: \n"<<cash;
	}else {
		if ((time > 10) && (time < 20)){
			points = points + 5;
			totalp = points * time;
			cash = totalp * cash;
			cout<<"O total de pontos foi : "<<totalp<<"\n";
			cout<<"O total em R$: \n"<<cash;
		}else {
			points = points + 10;
			totalp = points * time;
			cash = totalp * cash;
			cout<<"O total de pontos foi : "<<totalp<<"\n";
			cout<<"O total em R$: \n"<<cash;
		}
	}
}
