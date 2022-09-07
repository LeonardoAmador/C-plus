#include <iostream>
#include <locale>
#include <locale.h>

using namespace std;

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float X, Y, M2;
	
	cout<<"Informe a largura do terreno : ";
	cin>>X;
	
	cout<<"Informe o comprimento do terreno : ";
	cin>>Y;
	
	M2 = X * Y;
	
	if (M2 < 100){
		cout<<"Terreno popular";
	}else{
		if ((M2 > 100) && (M2 < 500)) {
			cout<<"Terreno master";
		}else {
			cout<<"Terreno vip";
		}
	}
}
