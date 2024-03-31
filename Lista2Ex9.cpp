/*
Computacao Para a Engenharia - 2024 - Lista 2, Exercicio 9 
Autor: Guilherme Carvalho
Data: 30/03/2024
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Iniccio da função 
int main(){

	unsigned int d;
	float c;
	float h;
	float m;
	cout << "Calculo do valor a pagar e o custo medio por kilometro" << endl;
	cout << "Insira a distancia em kilometros: ";
	cin >> d;
	if( d <= 50){
		c = 1.75*d;	
	}
	else if( d <= 150 ){
		c = 1.75*50 + 1.65*(d-50) ;
	}
	else{
		c = 1.75*50 + 1.65*100 + 1.5*(d-150) ;
	}
	m = c/d;
	cout << "O valor total a pagar é R$" << c << endl;
	cout << "O custo medio e R$" << setprecision(2) << fixed << m << endl;
	return 0;							// Retorna 0; Pode ser intepretado com "Ocorreu tudo bem"
}
