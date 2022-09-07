#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

main(){
	float a, b, c, x1, x2, delta;
	
	cout<<"Informe o valor de 'A': ";
	cin>>a;
	cout<<"Informe o valor de 'B: ";
	cin>>b;
	cout<<"Informe o valor de 'C: ";
	cin>>c;
	
	delta = ((b*b) - 4)* a * c;
	
	if (delta >= 0){
		x1 == (- b + sqrt(delta))/ (2 * a);
		x2 == (- b - sqrt(delta))/ (2 * a);
		cout<<"A equacao dada e: \n" << a, b , c;
		cout<<"\nAs raizes sao: " << x1 , x2;
	}
	else {
		if (delta < 0){
			cout<<"Delta = 0 " << delta;
			cout<<"Nao foram encontradas raizes reais";
		}
	}
}
