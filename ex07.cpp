#include <iostream>
#include <locale>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float preco_custo, comissao_vendedor, preco_imposto, preco_final;
	
	cout<<"Informe o preco de custo do produto:";
	cin>>preco_custo;
	
	comissao_vendedor = preco_custo * 0.12;
	
	preco_imposto = preco_custo * 0.2695;
	
	preco_final = preco_custo + comissao_vendedor + preco_imposto;
	
	cout<<"Valor do Imposto: "<<preco_imposto<<"\n";
	cout<<"Valor da comissao: "<<comissao_vendedor<<"\n";
	cout<<"Valor de venda: "<<preco_final<<"\n";

}
