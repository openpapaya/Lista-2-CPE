/*
Computacao Para a Engenharia - 2024 - Lista 2, Exercicio 5 
Autor: Guilherme Carvalho
Data: 30/03/2024
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Iniccio da função 
int main(){

	int a;
	int b;
	int r;
	cout << "Verificar se o primeiro numero e multiplo do segundo" << endl;
	cout << "Insira o valor primeiro numero: ";
	cin >> a;
	cout << "Insira o valor do segundo numero: ";
	cin >> b;
	r = a%b;
	if(r == 0)
	{
		cout << "O primeiro numero, " << a << ", e multiplo do segundo" << b << endl; 
	}
	else
		cout << "O primeiro numero, " << a << ", nao e multiplo do segundo, " << b << endl; 
	return 0;							// Retorna 0; Pode ser intepretado com "Ocorreu tudo bem"
}
