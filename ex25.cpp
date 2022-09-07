#include <locale.h>
#include <iostream>
#include <locale>

using namespace std;

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	char car;
	float Km_traveled, Km_price, final_price;
	int rent_days, carP, carL;
	
	cout<<"Informe o tipo de carro alugado / Popular[P] e Luxo[L] :";
	cin>>car;
	
	cout<<"Quantos dias alugados : ";
	cin>>rent_days;
	
	cout<<"Quantos Km percorridos : ";
	cin>>Km_traveled;
	
	carP = 90 * rent_days;
	carL = 150 * rent_days;
	
	if (Km_traveled <= 100){
		Km_price = (Km_traveled * 0.20);
		final_price = (Km_price + carP);
		cout<<"O valor total a pagar é : \n"<<final_price;
	} else {
		if ((Km_traveled > 100) && (car == 'P')){
			Km_price = (Km_traveled * 0.10);
			final_price = (Km_price + carP);
			cout<<"O valor total a pagar é : \n"<<final_price;
		} else {
			if ((Km_traveled <= 200) && (car == 'L')){
				Km_price = (Km_traveled * 30);
				final_price = (Km_price + carL);
				cout<<"O valor total a pagar é : \n"<<final_price;
			} else {
				if ((Km_traveled > 200) && (car == 'L')){
					Km_price = (Km_traveled * 0.25);
					final_price = (Km_price + carL);
					cout<<"O valor total a pagar é : \n"<<final_price;
				}
			}
		}
	}
}
